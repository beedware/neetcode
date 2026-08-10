from typing import List

class Solution:
    def search(self, nums: List[int], target: int) -> int:
        pass



if __name__ == "__main__":
    import ast
    import inspect

    EXAMPLES = [
    "nums=[3,4,5,6,1,2]\ntarget=1",
    "nums=[3,5,6,0,1,2]\ntarget=4"
]
    EXPECTED = [
    "4",
    "-1"
]

    def _literal(value):
        return ast.literal_eval(
            value.replace("null", "None").replace("true", "True").replace("false", "False")
        )

    def _parse_kwargs(case):
        return eval(
            "dict(" + case.replace("null", "None").replace("true", "True").replace("false", "False") + ")",
            {"__builtins__": {}, "dict": dict},
        )

    def _build_linked_list(values):
        dummy = ListNode()
        cur = dummy
        for value in values:
            cur.next = ListNode(value)
            cur = cur.next
        return dummy.next

    def _linked_list_to_list(node):
        values = []
        seen = set()
        while node and id(node) not in seen:
            seen.add(id(node))
            values.append(node.val)
            node = node.next
        return values

    def _build_tree(values):
        if not values:
            return None
        nodes = [None if value is None else TreeNode(value) for value in values]
        kids = nodes[::-1]
        root = kids.pop()
        for node in nodes:
            if node:
                if kids:
                    node.left = kids.pop()
                if kids:
                    node.right = kids.pop()
        return root

    def _tree_to_list(root):
        if not root:
            return []
        values = []
        queue = [root]
        while queue:
            node = queue.pop(0)
            if node is None:
                values.append(None)
                continue
            values.append(node.val)
            queue.append(node.left)
            queue.append(node.right)
        while values and values[-1] is None:
            values.pop()
        return values

    def _prepare_kwargs(method, kwargs):
        parameters = inspect.signature(method).parameters
        prepared = dict(kwargs)
        if "head" in prepared and isinstance(prepared["head"], list) and "ListNode" in globals():
            prepared["head"] = _build_linked_list(prepared["head"])
        if "lists" in prepared and isinstance(prepared["lists"], list) and "ListNode" in globals():
            prepared["lists"] = [_build_linked_list(values) for values in prepared["lists"]]
        if "root" in prepared and isinstance(prepared["root"], list) and "TreeNode" in globals():
            prepared["root"] = _build_tree(prepared["root"])
        return {name: prepared[name] for name in parameters if name in prepared}

    def _display(value):
        if "ListNode" in globals() and isinstance(value, ListNode):
            return _linked_list_to_list(value)
        if "TreeNode" in globals() and isinstance(value, TreeNode):
            return _tree_to_list(value)
        if isinstance(value, list):
            return [_display(item) for item in value]
        return value

    def _run_design_case(case):
        data = _literal(case)
        obj = None
        output = []
        idx = 0
        while idx < len(data):
            op = data[idx]
            if idx == 0:
                obj = globals()[op]()
                output.append(None)
                idx += 1
                continue
            arg = data[idx + 1] if idx + 1 < len(data) and not isinstance(data[idx + 1], str) else []
            if not isinstance(arg, list):
                arg = [arg]
            output.append(getattr(obj, op)(*arg))
            idx += 2
        return output

    for index, case in enumerate(EXAMPLES, 1):
        expected = EXPECTED[index - 1] if index - 1 < len(EXPECTED) else None
        try:
            if case.lstrip().startswith("[") and "Solution" not in globals():
                result = _run_design_case(case)
            elif "Codec" in globals():
                kwargs = _parse_kwargs(case)
                root = _build_tree(kwargs.get("root", []))
                codec = Codec()
                result = _tree_to_list(codec.deserialize(codec.serialize(root)))
            else:
                solution = Solution()
                method_name = next(name for name in dir(solution) if not name.startswith("_"))
                method = getattr(solution, method_name)
                result = method(**_prepare_kwargs(method, _parse_kwargs(case)))
            print(f"Example {index}: {case}")
            if expected is not None:
                print(f"Expected: {expected}")
            print(f"Actual:   {_display(result)}")
        except Exception as error:
            print(f"Example {index}: {case}")
            if expected is not None:
                print(f"Expected: {expected}")
            print(f"Error:    {error}")

