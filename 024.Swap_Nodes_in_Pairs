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
    ListNode* swapPairs(ListNode* head) {
        if (head == NULL || head->next == NULL) {
            return head;
        } else {
            ListNode* result = new ListNode(0);
            ListNode* cur = result;
            ListNode* pointer = head;
            while(pointer != NULL && pointer->next != NULL) {
                ListNode* next = pointer->next->next;
                cur->next = pointer->next;
                cur->next->next = pointer;
                pointer->next = next;
                cur = cur->next->next;
                pointer = pointer->next;
            }
            return result->next;
        }
    }
};
