int leastShots(String[] damageChart, int[] bossHealth) {
  priorityQueue pq;

  pq.push(node(0, 0));

  while (pq.empty() == false) {
    node top = pq.top();
    pq.pop();

    // Make sure we don’t visit the same configuration twice
    if (visited[top.weapons]) continue;
    visited[top.weapons] = true;

    // A quick trick to check if we have all the weapons, meaning we defeated all the bosses.
    // We use the fact that (2^numWeapons - 1) will have all the numWeapons bits set to 1.
    if (top.weapons == (1 << numWeapons) - 1)
      return top.shots;

    for (int i = 0; i < damageChart.length; i++) {
      // Check if we’ve already visited this boss, then don’t bother trying him again
      if ((top.weapons >> i) & 1) continue;

      // Now figure out what the best amount of time that we can destroy this boss is, given the weapons we have.
      // We initialize this value to the boss’s health, as that is our default (with our KiloBuster).
      int best = bossHealth[i];
      for (int j = 0; j < damageChart.length; j++) {
        if (i == j) continue;
        if (((top.weapons >> j) & 1) && damageChart[j][i] != ‘0’) {
          // We have this weapon, so try using it to defeat this boss
          int shotsNeeded = bossHealth[i] / (damageChart[j][i] - ‘0’);
          if (bossHealth[i] % (damageChart[j][i] - ‘0’) != 0) shotsNeeded++;
          best = min(best, shotsNeeded);
        }
      }

      // Add the new node to be searched, showing that we defeated boss i, and we used ‘best’ shots to defeat him.
      pq.add(node(top.weapons | (1 << i), top.shots + best));
    }
  }
}
