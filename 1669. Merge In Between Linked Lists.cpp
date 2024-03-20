// 1669. Merge In Between Linked Lists
// Solution:
// CODE:
class Solution {
public:
    ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2) {
        // Create a dummy node to handle cases where the replacement starts from the head
        ListNode* dummy = new ListNode(0);
        dummy->next = list1;
        
        // Find the node just before the range to be replaced (node at index a-1)
        ListNode* prevA = dummy;
        for (int i = 0; i < a; ++i)
            prevA = prevA->next;
        
        // Find the node at the end of the range to be replaced (node at index b)
        ListNode* nodeB = prevA->next;
        for (int i = a; i <= b; ++i)
            nodeB = nodeB->next;
        
        // Link the node just before the range to be replaced to the head of list2
        prevA->next = list2;
        
        // Find the last node in list2
        ListNode* tailList2 = list2;
        while (tailList2->next != nullptr)
            tailList2 = tailList2->next;
        
        // Link the last node in list2 to the node after the range to be replaced
        tailList2->next = nodeB;
        
        // Return the updated list1 (excluding the dummy node)
        return dummy->next;
    }
};
