string electionResult(string voters) {

    int A = 0;
    int B = 0;

    for (int i = 0; i < voters.size(); i++) {

        if (voters[i] == 'A') {
            A++;
        }

        else if (voters[i] == 'B') {
            B++;
        }

 
        else {

 
            int j = i, minDistB = INT_MAX;
            while (j >= 0) {
                if (voters[j] == 'B') {
                    minDistB = (i - j);
                    break;
                }
                j--;
            }

            j = i;
            int minDistA = INT_MAX;
            while (j < voters.size()) {
                if (voters[j] == 'A') {
                    minDistA = (j - i);
                    break;
                }
                j++;
            }
            if (minDistB < minDistA) {
                B++;
            }
            else if (minDistB > minDistA) {
                A++;
            }
        }
    }

    if (A > B) {
        return "A";
    }

    else if (A < B) {
        return "B";
    }

    else {
        return "Coalition";
    }

}