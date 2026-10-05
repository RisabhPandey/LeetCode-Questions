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
    ListNode* mergeNodes(ListNode* head) {
        ListNode* ptr1 = head->next;
        ListNode* dummy = new ListNode(-1);
        ListNode* ans = dummy;

        while(ptr1 != NULL){
        int sum =0;
        while(ptr1->val !=0){
            sum+=ptr1->val;
            ptr1=ptr1->next;
        }
        ListNode* Temp = new ListNode(sum);
        dummy->next = Temp;
        dummy = dummy->next;
        ptr1=ptr1->next;
        }
        return ans->next;
    }
};