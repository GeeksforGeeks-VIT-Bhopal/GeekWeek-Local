

    // Complete the deleteNode function below.

    /*
     * For your reference:
     *
     * SinglyLinkedListNode {
     *     int data;
     *     SinglyLinkedListNode next;
     * }
     *
     */
    static SinglyLinkedListNode deleteNode(SinglyLinkedListNode head, int position) {
        SinglyLinkedListNode temp1 = head;
        if(position == 0)
        {
            head = temp1.next;
        }
        else{
        SinglyLinkedListNode temp2 = head;
        for(int i = 0; i < position-1; i++)
        {
            temp1 = temp1.next;
        } 
        temp2 = temp1.next;
        temp1.next = temp2.next;
        temp2 = null;}
        return head;
    }

