string doorStatus(int n) {
    // Boolean array to store status of ith door
    bool status[n + 1] = {0};
    // Traversing on each multiple of each ID and flipping the status
    for (int id = 1; id <= n; ++id) {
        for (int j = id; j <= n; j += id) {
            status[j] = !status[j];
        }
    }

    string sb;
    for (int i = 1; i <= n; ++i) {
        // If final status[i] is open then it means that door is open so we will append '1'
        if (status[i]) {
            sb.append("1");
        } else {
            sb.append("0");
        }
    }

    return sb;
}
