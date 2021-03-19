void pushToQueue(queue < node > q, node v) {
  if (visited[v.player1X][v.player1Y][v.player2X][v.player2Y]) return;
  q.push(v);
  visited[v.player1X][v.player1Y][v.player2X][v.player2Y] = true;
}

int minTurns(String[] board) {
  int width = board[0].length;
  int height = board.length;

  node start;
  // Find the initial position of A and B, and save them in start.

  queue < node > q;
  pushToQueue(q, start)
  while (q.empty() == false) {
    node top = q.front();
    q.pop();

    // Check if player 1 or player 2 is out of bounds, or on an X square, if so continue
    // Check if player 1 or player 2 is on top of each other, if so continue

    // Check if the current positions of A and B are the opposite of what they were in start.
    // If they are we have exchanged positions and are finished!
    if (top.player1X == start.player2X && top.player1Y == start.player2Y &&
      top.player2X == start.player1X && top.player2Y == start.player1Y)
      return top.steps;

    // Now we need to generate all of the transitions between nodes, we can do this quite easily using some
    // nested for loops, one for each direction that it is possible for one player to move. Since we need
    // to generate the following deltas: (-1,-1), (-1,0), (-1,1), (0,-1), (0,0), (0,1), (1,-1), (1,0), (1,1)
    // we can use a for loop from -1 to 1 to do exactly that.
    for (int player1XDelta = -1; player1XDelta <= 1; player1XDelta++) {
      for (int player1YDelta = -1; player1YDelta <= 1; player1YDelta++) {
        for (int player2XDelta = -1; player2XDelta <= 1; player2XDelta++) {
          for (int player2YDelta = -1; player2YDelta <= 1; player2YDelta++) {
            // Careful though! We have to make sure that player 1 and 2 did not swap positions on this turn
            if (top.player1X == top.player2X + player2XDelta && top.player1Y == top.player2Y + player2YDelta &&
              top.player2X == top.player1X + player1XDelta && top.player2Y == top.player1Y + player1YDelta)
              continue;

            // Add the new node into the queue
            pushToQueue(q, node(top.player1X + player1XDelta, top.player1Y + player1YDelta,
              top.player2X + player2XDelta, top.player2Y + player2YDelta,
              top.steps + 1));
          }
        }
      }
    }
  }
  // It is not possible to exchange positions, so
  // we return -1. This is because we have explored
  // all the states possible from the starting state,
  // and haven’t returned an answer yet.
  return -1;
}
