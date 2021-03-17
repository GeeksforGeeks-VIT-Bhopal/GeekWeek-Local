

    // Complete the insertNodeAtTail function below.

    /*
     * For your reference:
     *
     * SinglyLinkedListNode {
     *     int data;
     *     SinglyLinkedListNode next;
     * }
     *
     */
    static SinglyLinkedListNode insertNodeAtTail(SinglyLinkedListNode head, int data) {
        SinglyLinkedListNode temp1 = new SinglyLinkedListNode(data);
        temp1.data = data;
        if(head == null)
        {
            temp1.next = head;
            head = temp1;
        }
        SinglyLinkedListNode temp2 = head;
        while(temp2.next != null)
        {
            temp2=temp2.next;
        }
        temp2.next = temp1;
        temp1.next = null;
        return head;
    }

