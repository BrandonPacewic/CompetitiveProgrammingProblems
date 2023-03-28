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
    set<int> used;

    ListNode* deleteDuplicates(ListNode* head) {
        if (head == nullptr) {
            return head;
        }

        if (used.find(head->val) != used.end()) {
            return deleteDuplicates(head->next);
        } else {
            used.insert(head->val);
            head->next = deleteDuplicates(head->next);
            return head;
        }
    }
};
