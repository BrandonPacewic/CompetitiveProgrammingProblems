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
    ListNode* reverseList(ListNode* head) {
        ListNode* first = nullptr;

        if (head == nullptr || head->next == nullptr) {
            return head;
        }

        first = reverseList(head->next);
        head->next->next = head;
        head->next = nullptr;

        return first;
    }
};
