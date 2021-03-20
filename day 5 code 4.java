public class Solution {
	public static Node getListAfterDeleteOperation(Node head) {

		if (head == null)
			return head;

		// Variable to keep track of the value of the last node deleted
		int deletedValue = -1;
		Node cur = head;

		while (cur.next != null) {

			Node temp = new Node(-1);

			if (cur.next.data < cur.data && deletedValue == -1) {

				deletedValue = cur.next.data;
				temp = cur.next;
				cur.next = cur.next.next;

			} else if (deletedValue != -1 && cur.next.data < deletedValue) {

				deletedValue = cur.next.data;
				temp = cur.next;
				cur.next = cur.next.next;

			} else {

				deletedValue = -1;
				cur = cur.next;

			}
		}
		return head;
	}
}
