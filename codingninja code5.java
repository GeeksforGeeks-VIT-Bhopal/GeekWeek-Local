import java.util.HashMap;
import java.util.ArrayList;

public class Solution {

	public static int subarraySum(int[] arr) {
		// Hash map to store the sum of the subarray.
		HashMap<Integer, Integer> mapp = new HashMap<Integer, Integer>();
		int currSum = 0;
		int count = 0;
		int l = arr.length;
		for (int i = 0; i < l; i++) {
			currSum += arr[i];
			// Checking if current sum is equal is 0.
			if (currSum == 0) {
				count++;
			}

			// Checking if current sum already exists in the hash map.
			if (mapp.containsKey(currSum)) {
				count += mapp.get(currSum);
				mapp.put(currSum, mapp.get(currSum) + 1);
			}

			else {
				mapp.put(currSum, 1);
			}

		}

		return count;
	}

	public static int subMatrices(ArrayList<ArrayList<Integer>> mat, int n) {
		int ans = 0;
		// If order of matrix is 1, return 0 if mat[0][0] is non zero, else return 1.
		if (n == 1) {
			return (mat.get(0).get(0) == 0 ? 1 : 0);
		}

		for (int i = 0; i < n; i++) {
			int[] arr = new int[n];
			for (int j = 0; j < n; j++) {
				arr[i] = 0;
			}

			for (int j = i; j < n; j++) {
				for (int k = 0; k < n; k++) {
					arr[k] += mat.get(j).get(k);
				}

				ans += subarraySum(arr);
			}

		}

		return ans;
	}

}
