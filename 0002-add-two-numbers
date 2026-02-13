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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        auto node = new ListNode(0);
        auto k = node;
        auto carry = 0;
        while (l1 != nullptr || l2 != nullptr || carry != 0) {
            auto num1 = (l1 != nullptr) ? l1->val : 0;
            auto num2 = (l2 != nullptr) ? l2->val : 0;
            auto sum = num1 + num2 + carry;

            carry = sum / 10;
            auto j = new ListNode(sum % 10);
            k->next = j;
            k = k->next;

            l1 = (l1 != nullptr) ? l1->next : nullptr;
            l2 = (l2 != nullptr) ? l2->next : nullptr;
        }
        node = node->next;
        return node;
    }
};
