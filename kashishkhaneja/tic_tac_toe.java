package game;
import java.util.Scanner;
public class TicTacToe {
	private static char[][] marks = new char[3][3];
	private static char[] persons = new char[2];
	public static void main(String[] args) {
		Scanner s = new Scanner(System.in);
		System.out.println("Enter 1st person's tic-tac-toe mark: ");
		char x = s.next().charAt(0);
		System.out.println("Enter 2nd person's tic-tac-toe mark: ");
		char o = s.next().charAt(0);
		while (x == o) {
			System.out.println("1st and 2nd person's tic-tac-toe mark cannot be same.");
			System.out.println("Enter 2nd person's tic-tac-toe mark: ");
			o = s.next().charAt(0);
		}
		initializePersons(x, o);
		initializeMarks();
		System.out.println();
		System.out.println("Let's begin the game...");
		boolean isGameOver = isGameOver();
		char winner = findWinner();
		String pos1 = null, pos2 = null;
		boolean firstPersonEntered = false;
		boolean secondPersonEntered = false;
		while (!isGameOver || winner == '\u0000') {
			displayMarks();
			System.out.println();
			if (!firstPersonEntered) {
				System.out.println("Enter 1st person's tic-tac-toe mark position (x,y): ");
				pos1 = s.next();
				while (!pos1.matches("[0-2],[0-2]")) {
					System.out.println("Wrong entry...");
					System.out.println("Enter 1st person's tic-tac-toe mark position (x,y): ");
					pos1 = s.next();
				}
			}
			boolean is1stPersonPosFilled = isPosFilled(pos1);
			if (is1stPersonPosFilled) {
				if (!secondPersonEntered) {
					firstPersonEntered = true;
				} else {
					firstPersonEntered = false;
				}
			}
			if (!is1stPersonPosFilled) {
				markPosition(pos1, persons[0]);
				isGameOver = isGameOver();
				winner = findWinner();
				if (isGameOver) {
					secondPersonEntered = true;
					displayMarks();
					System.out.println();
					System.out.println("Game over!");
					if (winner == '\u0000') {
						System.out.println("No winner found");
					}
				}
				if (winner != '\u0000') {
					System.out.println("Winner found: " + winner);
				}
				if (isGameOver || winner != '\u0000') {
					break;
				}
			}
			displayMarks();
			System.out.println();
			if (!secondPersonEntered) {
				System.out.println("Enter 2nd person's tic-tac-toe mark position (x,y): ");
				pos2 = s.next();
				while (!pos2.matches("[0-2],[0-2]")) {
					System.out.println("Wrong entry...");
					System.out.println("Enter 2nd person's tic-tac-toe mark position (x,y): ");
					pos2 = s.next();
				}
			}
			boolean is2ndPersonPosFilled = isPosFilled(pos2);
			if (is2ndPersonPosFilled) {
				if (!firstPersonEntered) {
					secondPersonEntered = true;
				} else {
					secondPersonEntered = false;
				}
			}
			if (!is2ndPersonPosFilled) {
				markPosition(pos2, persons[1]);
				isGameOver = isGameOver();
				winner = findWinner();
				if (isGameOver) {
					firstPersonEntered = true;
					displayMarks();
					System.out.println();
					System.out.println("Game over!");
					if (winner == '\u0000') {
						System.out.println("No winner found");
					}
				}
				if (winner != '\u0000') {
					System.out.println("Winner found: " + winner);
				}
				if (isGameOver || winner != '\u0000') {
					break;
				}
			}
		}
		s.close();
	}
	private static void markPosition(String pos, char mark) {
		String[] splitPos = pos.split(",");
		int pos1 = Integer.parseInt(splitPos[0]);
		int pos2 = Integer.parseInt(splitPos[1]);
		marks[pos1][pos2] = mark;
	}
	private static void displayMarks() {
		if (isPosAvailable()) {
			System.out.println("Below positions are available in the board");
			for (int i = 0; i < marks.length; i++) {
				for (int j = 0; j < marks[0].length; j++) {
					if (marks[i][j] == persons[0]) {
						System.out.print(" " + persons[0] + " ");
					} else if (marks[i][j] == persons[1]) {
						System.out.print(" " + persons[1] + " ");
					} else {
						System.out.print(i + "," + j + " ");
					}
				}
				System.out.println();
			}
		} else {
			System.out.println("All positions are exausted in the board");
			System.out.println("The final board is given below");
			for (int i = 0; i < marks.length; i++) {
				for (int j = 0; j < marks[0].length; j++) {
					if (marks[i][j] == persons[0]) {
						System.out.print(" " + persons[0] + " ");
					} else if (marks[i][j] == persons[1]) {
						System.out.print(" " + persons[1] + " ");
					}
				}
				System.out.println();
			}
		}
	}
	private static void initializePersons(char firstPerson, char secondPerson) {
		persons[0] = firstPerson;
		persons[1] = secondPerson;
	}
	private static void initializeMarks() {
		for (int i = 0; i < marks.length; i++) {
			for (int j = 0; j < marks[0].length; j++) {
				marks[i][j] = '\u0000';
			}
		}
	}
	private static boolean isPosFilled(String pos) {
		boolean isPosFilled = false;
		String[] split = pos.split(",");
		int pos1 = Integer.parseInt(split[0]);
		int pos2 = Integer.parseInt(split[1]);
		if (marks[pos1][pos2] == persons[0] || marks[pos1][pos2] == persons[1]) {
			isPosFilled = true;
		}
		return isPosFilled;
	}
	private static boolean isGameOver() {
		boolean isGameOver = false;
		if (findWinner() != '\u0000') {
			isGameOver = true;
		} else {
			isGameOver = !isPosAvailable();
		}
		return isGameOver;
	}
	private static boolean isPosAvailable() {
		boolean isPosAvailable = true;
		int count = 0;
		for (int i = 0; i < marks.length; i++) {
			for (int j = 0; j < marks[0].length; j++) {
				if (marks[i][j] != '\u0000') {
					count++;
				}
			}
		}
		if (count == 9) {
			isPosAvailable = false;
		}
		return isPosAvailable;
	}
	private static char findWinner() {
		if (diagonalWinner() != '\u0000') {
			return diagonalWinner();
		} else if (horizontalWinner() != '\u0000') {
			return horizontalWinner();
		} else if (verticalWinner() != '\u0000') {
			return verticalWinner();
		}
		return '\u0000';
	}
	private static char horizontalWinner() {
		if (getWinner("0,0", "0,1", "0,2") == persons[0] || getWinner("0,0", "0,1", "0,2") == persons[1]) {
			return getWinner("0,0", "0,1", "0,2");
		} else if (getWinner("1,0", "1,1", "1,2") == persons[0] || getWinner("1,0", "1,1", "1,2") == persons[1]) {
			return getWinner("1,0", "1,1", "1,2");
		} else if (getWinner("2,0", "2,1", "2,2") == persons[0] || getWinner("2,0", "2,1", "2,2") == persons[1]) {
			return getWinner("2,0", "2,1", "2,2");
		}
		return '\u0000';
	}
	private static char verticalWinner() {
		if (getWinner("0,0", "1,0", "2,0") == persons[0] || getWinner("0,0", "1,0", "2,0") == persons[1]) {
			return getWinner("0,0", "1,0", "2,0");
		} else if (getWinner("0,1", "1,1", "2,1") == persons[0] || getWinner("0,1", "1,1", "2,1") == persons[1]) {
			return getWinner("0,1", "1,1", "2,1");
		} else if (getWinner("0,2", "1,2", "2,2") == persons[0] || getWinner("0,2", "1,2", "2,2") == persons[1]) {
			return getWinner("0,2", "1,2", "2,2");
		}
		return '\u0000';
	}
	private static char diagonalWinner() {
		if (getWinner("0,0", "1,1", "2,2") == persons[0] || getWinner("0,0", "1,1", "2,2") == persons[1]) {
			return getWinner("0,0", "1,1", "2,2");
		} else if (getWinner("0,2", "1,1", "2,0") == persons[0] || getWinner("0,2", "1,1", "2,0") == persons[1]) {
			return getWinner("0,2", "1,1", "2,0");
		}
		return '\u0000';
	}
	private static char getWinner(String pos1, String pos2, String pos3) {
		String[] splitPos1 = pos1.split(",");
		String[] splitPos2 = pos2.split(",");
		String[] splitPos3 = pos3.split(",");
		int pos11 = Integer.parseInt(splitPos1[0]);
		int pos12 = Integer.parseInt(splitPos1[1]);
		int pos21 = Integer.parseInt(splitPos2[0]);
		int pos22 = Integer.parseInt(splitPos2[1]);
		int pos31 = Integer.parseInt(splitPos3[0]);
		int pos32 = Integer.parseInt(splitPos3[1]);
		if (marks[pos11][pos12] == marks[pos21][pos22] && marks[pos21][pos22] == marks[pos31][pos32]) {
			return marks[pos11][pos12];
		}
		return '\u0000';
	}
}
