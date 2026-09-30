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
    ListNode* removeElements(ListNode* head, int val) {
        ListNode* ptr = head;
        ListNode* dummy = new ListNode(-1);
        ListNode* ans = dummy;

        while(ptr != NULL){
            if(ptr->val != val){
                dummy->next = ptr;
                dummy = dummy->next;
            }
                ptr = ptr->next;
        }
        
        dummy->next = NULL;
        
        return ans->next;
    }
};