class Solution {
public:
    ListNode *rotateRight(ListNode *head, int k) {
        // Start typing your C/C++ solution below
        // DO NOT write int main() function
        if(head==NULL) return NULL;
        ListNode *cur=head;
        int len=1;
        while(cur->next!=NULL){
            cur=cur->next;
            len++;
        }
        cur->next=head;
        int preLen=len-k%len-1;
        ListNode *pre=head;
        while(preLen--)
            pre=pre->next;
        head=pre->next;
        pre->next=NULL;
        return head;

    }
};
