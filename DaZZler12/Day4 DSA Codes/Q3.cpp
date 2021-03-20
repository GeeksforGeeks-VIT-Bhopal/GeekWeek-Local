[7:11 PM, 3/18/2021] Mayank Vit: /**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
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
            remove(…
[7:11 PM, 3/18/2021] Mayank Vit: class Solution {
public:
    int lengthOfLongestSubstring(string str) {
        int n = str.size();
    int res = 0; 
 
    for (int i = 0; i < n; i++) {
         
        
        vector<bool> visited(256);   
 
        for (int j = i; j < n; j++) {
 
            
            if (visited[str[j]] == true)
                break;
 
            else {
                res = max(res, j - i + 1);
                visited[str[j]] = true;
            }
        }
 
        
        visited[str[i]] = false;
    }
    return res;
    }
};
