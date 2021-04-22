class Solution {
public:
    map<int, ListNode*> hash;
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode * it = head;
        int counter=1;
        while(it) {
            hash[counter]=it;
            counter++;
            it=it->next;
        }
        if(counter==2){
            return NULL;
        }
        if(counter-n-1 == 0){
            head=head->next;
        } else {
            int prev = counter-n-1;
            int next = counter-n+1;
            remove(hash[prev], hash[next]);
        }
        return head;
    }
    void remove(ListNode* prev, ListNode* next = NULL) {
        
        (*prev).next=next;
    }
};
