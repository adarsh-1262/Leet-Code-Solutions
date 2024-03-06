// 141. Linked List Cycle
// Solution:

// CODE:
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) {
        // firstly checked the condition that it has element or not or have cycle no not
        if(!head || !head->next){
            return false;
        }
        // Initialised two pointers
        ListNode* slow = head;
        ListNode* fast = head->next;

        // Checking condition and running loop if have next elements to it
        while(fast && fast->next){
            // checking condition if both pointers value are equal, then return true
            if(slow == fast){
                return true;
            }
            // Incrementing the pointers value according to the question
            slow = slow->next;
            fast = fast->next->next;
        }
        return false;
    }
};
