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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* res = new ListNode(0);
        res->next = head;
        ListNode* temp = res;
        for (int i = 0; i < n; i ++) {
            head = head->next;
        }
        while (head != NULL) {
            temp = temp->next;
            head = head->next;
        }
        temp->next = temp->next->next;
        return res->next;
    }
};
