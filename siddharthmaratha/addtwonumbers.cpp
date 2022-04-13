class Solution 
{
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) 
    {
		// Create Head Node that will be returned in the end
        ListNode* head = new ListNode();
		// Create Node that always will be current
        ListNode* current = head;
        
        int addition = 0;
        int val;
        
		// Create new Nodes and calculate value until both input Nodes are not empty
        while( l1 != nullptr || l2 != nullptr )
        {
			// Count value only from existing Nodes
            if ( l1 == nullptr ) { val = l2->val + addition; }
            else if ( l2 == nullptr ) { val = l1->val + addition; }
            else { val = l1->val + l2->val + addition; }
            
			// Find addition that should be added in the next step or to last Node. Value should be less than 10
            addition = val / 10;
            if (val > 9) { val -= 10; }
            
			// Create new Node to next of the current and make new created Node as current
            current->next = new ListNode(val);
            current = current->next;
            
			// Switch to next Node if it's possible
            if ( l1 != nullptr) { l1 = l1->next; }
            if ( l2 != nullptr) { l2 = l2->next; }
        }
        
		// In case addition still exist - create new Node with addition value
        if(addition > 0)
        {
            current->next = new ListNode(addition);
        }
        
		// Return next Node of Head because first Node always will be empty
        return head->next;
    }
};
