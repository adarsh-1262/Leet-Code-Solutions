// 206. Reverse Linked List
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
    // Function to reverse a singly-linked list
    ListNode* reverseList(ListNode* head) {
        // Initialize previous node as nullptr
        ListNode* prevNode = nullptr;
        // Initialize current node as head
        ListNode* currentNode = head;

        // Loop until current node is nullptr
        while(currentNode != nullptr) {
            // Store the next node in a temporary variable
            ListNode* nextNode = currentNode->next;
            // Reverse the pointer of the current node to the previous node
            currentNode->next = prevNode;
            // Move the pointers one step ahead for next iteration
            prevNode = currentNode;
            currentNode = nextNode;
        }

        // At the end of the loop, prevNode will be pointing to the new head of the reversed list
        return prevNode;
    }
};
