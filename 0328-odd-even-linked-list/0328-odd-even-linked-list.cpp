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
    ListNode* oddEvenList(ListNode* head) {

        if(head == NULL || head->next == NULL)
            return head;

        ListNode* oddh = head;
        ListNode* evenh = head->next;
        ListNode* Evenstart = evenh;

        while(evenh != NULL && evenh->next != NULL) {

             // First connect odd nodes
            oddh->next = evenh->next;
            oddh = oddh->next;

            // Then connect even nodes
            evenh->next = oddh->next;
            evenh = evenh->next;
        }

        oddh->next = Evenstart;

        return head;
    }
};