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
	ListNode *swapPairs(ListNode *head)
	{
		if (head == nullptr || head->next == nullptr)
			return head;
		auto *first = head;
		auto *second = head->next;
		auto *next_phead = second->next;

		second->next = first;
		first->next = swapPairs(next_phead);
		return second;
	}
};
