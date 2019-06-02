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
    ListNode* rotateRight(ListNode* head, int k) {
        if (head == NULL) {
            return head;
        }
        int length = 1;
        ListNode* temp = head;
        while (temp->next != NULL) {
            length += 1;
            temp = temp->next;
        }
        temp->next = head;
        for (int i = 0; i < (length - k % length); i ++) {
            head = head->next;
        }
        temp = head;
        for (int i = 0; i < length - 1; i ++) {
            temp = temp->next;
        }
        temp->next = NULL;
        return head;
    }
};