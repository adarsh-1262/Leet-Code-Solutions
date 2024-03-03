// 19. Remove Nth Node From End of List
// Solution:

// CODE:
/**
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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        // Initialise the new LinkedList pointing next as head of the list;
        ListNode *any = new ListNode(0);
        any->next = head;
        // Creating two pointers with initial position at list any
        ListNode *ptr1 = any;
        ListNode *ptr2 = any;

        // Traversing ptr1 upto given number n
        for(int i=0; i<=n; i++){
            ptr1 = ptr1->next;
        }

        // traverse both pointers ptr1 & ptr2 until ptr1 becomes != nullptr
        while(ptr1 != nullptr){
            ptr1 = ptr1->next;
            ptr2 = ptr2->next;
        }

        // Now skip the element from the list which we have to delete
        ptr2->next = ptr2->next->next;

        // Now return the head of the newly linkedList
        return any->next;
    }
};
