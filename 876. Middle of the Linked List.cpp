// 876. Middle of the Linked List
// Solution:-

// CODE_SOL-1:
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
    ListNode* middleNode(ListNode* head) {
        vector<ListNode*> array;

        int length = 0;
        while(head != nullptr){
            array.push_back(head);
            head = head->next;
            length++;
        }
        return array[length / 2];
    }
};

// CODE_SOL-2:
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
    ListNode* middleNode(ListNode* head) {
        ListNode* middle = head;
        ListNode* end = head;

        while(end != nullptr && end->next != nullptr){
            middle = middle->next;
            end = end->next->next;
        }
        return middle;
    }
};
