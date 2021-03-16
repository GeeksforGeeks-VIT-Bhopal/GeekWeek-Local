//Internet Address problem 
public class Solution {

	public static void internetAddress(String s) {
		String ptr = s;

		int starter, pos;

		if (ptr.charAt(0) == 'h' && ptr.charAt(1) == 't' && s.charAt(2) == 't' && s.charAt(3) == 'p') {
			System.out.print("http://");
			starter = 3;
			pos = getRest(ptr, 3);
		} else {
			System.out.print("ftp://");
			starter = 2;
			pos = getRest(ptr, 2);
		}
		System.out.print(ptr.substring(starter + 1, starter + pos + 1));
		System.out.print(".ru");
		pos = starter + pos + 2;
		System.out.print("/");
		System.out.print(ptr.substring(pos + 1));
	}

	private static int getRest(String s, int i) {

		for (int j = i + 1; j < s.length(); j++)
			if (s.charAt(j) == 'r' && s.charAt(j + 1) == 'u')
				return j - 1 - i;
		return -1;
	}

}
