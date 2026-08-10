import ast
import inspect


def _literal(value):
    return ast.literal_eval(
        value.replace("null", "None").replace("true", "True").replace("false", "False")
    )


def _parse_kwargs(case):
    return eval(
        "dict(" + case.replace("null", "None").replace("true", "True").replace("false", "False") + ")",
        {"__builtins__": {}, "dict": dict},
    )


def _build_linked_list(list_node, values):
    dummy = list_node()
    cur = dummy
    for value in values:
        cur.next = list_node(value)
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


def _build_tree(tree_node, values):
    if not values:
        return None
    nodes = [None if value is None else tree_node(value) for value in values]
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


def _prepare_kwargs(method, kwargs, scope):
    parameters = inspect.signature(method).parameters
    prepared = dict(kwargs)
    list_node = scope.get("ListNode")
    tree_node = scope.get("TreeNode")
    if "head" in prepared and isinstance(prepared["head"], list) and list_node:
        prepared["head"] = _build_linked_list(list_node, prepared["head"])
    if "lists" in prepared and isinstance(prepared["lists"], list) and list_node:
        prepared["lists"] = [_build_linked_list(list_node, values) for values in prepared["lists"]]
    if "root" in prepared and isinstance(prepared["root"], list) and tree_node:
        prepared["root"] = _build_tree(tree_node, prepared["root"])
    return {name: prepared[name] for name in parameters if name in prepared}


def _display(value, scope):
    list_node = scope.get("ListNode")
    tree_node = scope.get("TreeNode")
    if list_node and isinstance(value, list_node):
        return _linked_list_to_list(value)
    if tree_node and isinstance(value, tree_node):
        return _tree_to_list(value)
    if isinstance(value, list):
        return [_display(item, scope) for item in value]
    return value


def _run_design_case(scope, case):
    data = _literal(case)
    cls = scope[data[0]]
    method_names = {
        name
        for name in dir(cls)
        if not name.startswith("_") and callable(getattr(cls, name, None))
    }
    idx = 1
    constructor_args = []
    while idx < len(data) and not (isinstance(data[idx], str) and data[idx] in method_names):
        constructor_args.append(data[idx])
        idx += 1
    obj = cls(*constructor_args)
    output = []
    output.append(None)
    while idx < len(data):
        op = data[idx]
        has_arg = idx + 1 < len(data) and not (
            isinstance(data[idx + 1], str) and data[idx + 1] in method_names
        )
        arg = data[idx + 1] if has_arg else []
        method = getattr(obj, op)
        parameter_count = len(inspect.signature(method).parameters)
        if parameter_count == 0:
            output.append(method())
        elif parameter_count == 1:
            output.append(method(arg))
        else:
            output.append(method(*arg))
        idx += 2 if has_arg else 1
    return output


def run_examples(scope, examples, expected):
    for index, case in enumerate(examples, 1):
        wanted = expected[index - 1] if index - 1 < len(expected) else None
        try:
            if case.lstrip().startswith("[") and "Solution" not in scope:
                result = _run_design_case(scope, case)
            elif "Codec" in scope:
                kwargs = _parse_kwargs(case)
                root = _build_tree(scope["TreeNode"], kwargs.get("root", []))
                codec = scope["Codec"]()
                result = _tree_to_list(codec.deserialize(codec.serialize(root)))
            else:
                solution = scope["Solution"]()
                method_name = next(name for name in dir(solution) if not name.startswith("_"))
                method = getattr(solution, method_name)
                result = method(**_prepare_kwargs(method, _parse_kwargs(case), scope))
            print(f"Example {index}: {case}")
            if wanted is not None:
                print(f"Expected: {wanted}")
            print(f"Actual:   {_display(result, scope)}")
        except Exception as error:
            print(f"Example {index}: {case}")
            if wanted is not None:
                print(f"Expected: {wanted}")
            print(f"Error:    {error}")
