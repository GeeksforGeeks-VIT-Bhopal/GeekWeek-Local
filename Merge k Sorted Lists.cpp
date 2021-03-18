class Solution {
public:
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        if(lists.empty()) return nullptr;
        int len = lists.size();
        while(len > 1){
            for(int i = 0 ; i < len / 2; i++){
                lists[i] = merge2Lists(lists[i], lists[len - 1 - i]);
            }
            len = (len + 1) / 2;
        }

        return lists.front();
    }

    ListNode* merge2Lists(ListNode * l1, ListNode * l2){
        if(!l1) return l2;
        if(!l2) return l1;

        if(l1->val < l2->val){
            l1->next = merge2Lists(l1->next, l2);
            return l1;
        }
        else{
            l2->next = merge2Lists(l1, l2->next);
            return l2;
        }
    }
};
