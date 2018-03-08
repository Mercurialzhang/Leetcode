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
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        ListNode* result = new ListNode(0);
        ListNode* pointer = result;
        vector<int> temp;
        for (int i = 0; i < lists.size(); i ++) {
            if(lists[i] == NULL) {
                lists.erase(lists.begin() + i);
                i --;
            } else {
                temp.push_back(lists[i]->val);
            }
        }
        sort(temp.begin(), temp.end());
        while (!lists.empty()) {
            pointer->next = new ListNode(temp[0]);
            pointer = pointer->next;
            for (int j = 0; j < lists.size(); j ++) {
                if(lists[j]->val == temp[0]) {
                    if(lists[j] ->next == NULL) {
                        lists.erase(lists.begin() + j);
                        temp.erase(temp.begin());
                    } else {
                        lists[j] = lists[j]->next;
                        if (temp.size() == 1) {
                            temp[0] = lists[j]->val;
                        } else {
                            int m;
                            for (m = 0; m < temp.size() - 1; m ++) {
                                if (lists[j]->val < temp[m + 1]) {
                                    temp.insert(temp.begin() + m + 1, lists[j]->val);
                                    temp.erase(temp.begin());
                                    break;
                                }
                            }
                            if (m == temp.size() - 1) {
                                temp.push_back(lists[j]->val);
                                temp.erase(temp.begin());
                            }
                        }
                    }
                    break;
                }
            }
        }
        return result -> next;
    }
};
