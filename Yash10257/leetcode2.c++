class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* head=new ListNode();
        ListNode* temp=head;
        int t=0;
        temp->val=(l1->val+l2->val+t)%10;
        t=(l1->val+l2->val+t)/10;
        l2=l2->next;
        l1=l1->next;
        while(l1!=NULL&&l2!=NULL)
        {
            ListNode* te=new ListNode();
            temp->next=te;
            temp=te;
            temp->val=(l1->val+l2->val+t)%10;
            t=(l1->val+l2->val+t)/10;
            l1=l1->next;
            l2=l2->next;
        }
        while(l1!=NULL){
             ListNode* te=new ListNode();
            temp->next=te;
            temp=te;
            
            temp->val=(l1->val+t)%10;
            t=(l1->val+t)/10;l1=l1->next;
        }
         while(l2!=NULL){
            ListNode* te=new ListNode();
            temp->next=te;
            temp=te;
            
            temp->val=(l2->val+t)%10;
            t=(l2->val+t)/10;
             l2=l2->next;
        }
        if(t!=0)
        {
            ListNode* te=new ListNode();
            temp->next=te;
            temp=te;
            temp->val=t;
        }
        return head;
        
        
    }
};
