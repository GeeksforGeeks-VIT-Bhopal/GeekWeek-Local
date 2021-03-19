class node {
  int x, y;
}

int doFill(int x, int y) {
  int result = 0;

  // Declare our stack of nodes, and push our starting node onto the stack
  stack < node > s;
  s.push(node(x, y));

  while (s.empty() == false) {
    node top = s.top();
    s.pop();

    // Check to ensure that we are within the bounds of the grid, if not, continue
    if (top.x < 0 || top.x >= 600) continue;
    // Similar check for y
    if (top.y < 0 || top.y >= 400) continue;
    // Check that we haven’t already visited this position, as we don’t want to count it twice
    if (fill[top.x][top.y]) continue;

    fill[top.x][top.y] = true; // Record that we have visited this node

    // We have found this node to be empty, and part
    // of this connected area, so add 1 to the result
    result++;

    // Now we know that we have at least one empty square, then we will attempt to
    // visit every node adjacent to this node.
    s.push(node(top.x + 1, top.y));
    s.push(node(top.x - 1, top.y));
    s.push(node(top.x, top.y + 1));
    s.push(node(top.x, top.y - 1));
  }
  return result;
}
