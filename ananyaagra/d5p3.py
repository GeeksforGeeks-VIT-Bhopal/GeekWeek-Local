dfs(node start) {
  stack < node > s;
  s.push(start);
  while (s.empty() == false) {
    top = s.top();
    s.pop();

    if (top is not marked as visited) {
      check
      for termination condition(have we reached the node we want to ? )

      mark top as visited;
      add all of top’ s neighbors to the stack.
    }
  }
}
