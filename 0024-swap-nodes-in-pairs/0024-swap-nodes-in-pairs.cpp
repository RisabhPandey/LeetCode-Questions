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
    ListNode* swapPairs(ListNode* head) {
        // Base Case
        if (head == NULL || head->next == NULL) {
            return head;
        }

        ListNode* first = head;
        ListNode* second = head->next;

        // Recursively swap the remaining list
        first->next = swapPairs(second->next);

        // Swap the current pair
        second->next = first;

        // New head of this pair
        return second;
    }
};