import java.util.LinkedList;
import java.util.Queue;
import java.util.HashSet;
import java.util.ArrayList;

public class Solution {
	public static int wordLadder(String begin, String end, ArrayList<String> dict) {

		// If the end word is not present in dict then just return -1.
		if (dict.contains(end) == false) {
			return -1;
		}
		Queue<String> queue = new LinkedList<>();
		int count = 1;

		// Add the begin word
		queue.add(begin);
		HashSet<String> set = new HashSet<String>();
		set.add(begin);

		while (queue.size() > 0) {
			count++;

                // Iterate through queue
			for (int i = 0; i < queue.size(); i++) {

				String currentWord = queue.remove();
				if (currentWord.equals(end)) {
					return count;
				}
				int check = 0;
			
				for (int z = 0; z < currentWord.length(); z++) {

					if (currentWord.charAt(z) != end.charAt(z)) {
						check++;
					}
				}
				if (check == 1) {
					return count;
				}

				// Check for the adjacent word
				for (int j = 0; j < dict.size(); j++) {

					int diff = 0;
					for (int k = 0; k < currentWord.length(); k++) {

						if (currentWord.charAt(k) != dict.get(j).charAt(k)) {
							diff++;
						}
					}
					if (diff == 1) {
						if (set.contains(dict.get(j)) == false) {
							queue.add(dict.get(j));
							set.add(dict.get(j));
						}
					}
				}
			}
		}
		return -1;
	}
}
