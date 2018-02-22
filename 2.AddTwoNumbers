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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int carry = 0;
        int temp = 0;
        int temp1 = 0;
        int temp2 = 0;
        ListNode* p1 = l1;
        ListNode* p2 = l2;
        ListNode* result = new ListNode(0);
        ListNode* pointer = result;

        while (p1 != NULL || p2 != NULL) {
            temp1 = 0;
            temp2 = 0;
            if(p1 != NULL) {
                temp1 = p1->val;
            }
            if(p2 != NULL) {
                temp2 = p2->val;
            }
            temp = temp1 + temp2 + carry;
            if (temp >= 10) {
                carry = 1;
            }else {
                carry = 0;
            }
            pointer->next = new ListNode(temp%10);
            pointer = pointer->next;
            if(p1 != NULL) {
            p1 = p1->next;}
            if(p2 != NULL) {
            p2 = p2->next;}
        }
        if (carry > 0) {
            pointer->next = new ListNode(1);
            pointer = pointer->next;
        }
        return result->next;
    }
};
