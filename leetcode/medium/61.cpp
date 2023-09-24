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
    int getLength(ListNode* head) {
        if (head != nullptr) {
            return 1 + getLength(head->next);
        } else {
            return 0;
        }
    }

    ListNode* rotateRight(ListNode* head, int k) {
        if (head == nullptr || k == 0) {
            return head;
        }

        int length = getLength(head);

        if (length == 1) {
            return head;
        }

        k = k % length;

        for (int i = 0; i < k; ++i) {
            ListNode* p = head;

            while (p->next->next != nullptr) {
                p = p->next;
            }

            ListNode* newHead = new ListNode;
            newHead->val = p->next->val;
            newHead->next = head;
            head = newHead;
            p->next = nullptr;
        }

        return head;
    }
};
