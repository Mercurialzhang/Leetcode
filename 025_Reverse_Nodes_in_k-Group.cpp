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
    ListNode* reverseList(ListNode* head, ListNode* end) {
        if (head == NULL || head->next == NULL) {
            return head;
        }
        ListNode* before = head;
        ListNode* pointer = head->next;
        ListNode* temp;
        head->next = NULL;
        while (pointer != end) {
            temp = pointer->next;
            pointer->next = before;
            before = pointer;
            pointer = temp;
        }
        pointer->next = before;
        return end;
    }

    ListNode* reverseKGroup(ListNode* head, int k) {
        ListNode* res = new ListNode(0);
        ListNode* result = res;
        ListNode* front;
        ListNode* pointer;
        int temp = 0;
        while (head != NULL) {
            if (temp == 0) {
                pointer = new ListNode(head->val);
                front = pointer;
                temp ++;
            } else if (temp == k - 1 ) {
                pointer->next = new ListNode(head->val);
                pointer = pointer->next;
                result->next = reverseList(front, pointer);
                for (int i = 0; i < k; i ++) {
                    result = result->next;
                }
                temp = 0;
            } else {
                pointer->next = new ListNode(head->val);
                pointer = pointer->next;
                temp ++;
            }
            if(head->next == NULL && temp != 0) {
                pointer->next = NULL;
                result->next = front;
            }
            head = head->next;
        }
        return res->next;
    }
};
