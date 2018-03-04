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
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        ListNode* temp = new ListNode(0);
        ListNode* res = temp;
        while(l1 != NULL && l2 != NULL) {
            if(l1->val < l2->val) {
                temp->next = new ListNode(l1->val);
                l1 = l1->next;
                temp = temp->next;
            } else {
                temp->next = new ListNode(l2->val);
                l2 = l2->next;
                temp = temp->next;
            }
        }
        if (l1 == NULL) {
            while (l2 != NULL) {
                temp->next = new ListNode(l2->val);
                temp = temp->next;
                l2 = l2->next;
            }
        } else if (l2 == NULL) {
            while (l1 != NULL) {
                temp->next = new ListNode(l1->val);
                temp = temp->next;
                l1 = l1->next;
            }
        }
        return res->next;
    }
};
