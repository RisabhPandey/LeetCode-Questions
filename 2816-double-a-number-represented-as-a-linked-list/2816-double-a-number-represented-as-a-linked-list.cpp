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
    ListNode* doubleIt(ListNode* head) {
       ListNode* dummy = new ListNode(-1);
       ListNode* ans = dummy;
       ListNode* curr = head;
       ListNode* pre = NULL;
       int carry = 0;
       while(curr != NULL){
            ListNode* temp = curr->next;
            curr->next = pre;
            pre = curr;
            curr = temp;
       }
       while(pre != NULL){
        int sum = pre->val * 2 + carry;
        pre = pre->next;

        int d = sum%10;
        carry = sum/10;

        ListNode* t = new ListNode(d);
        dummy->next = t;
        dummy = dummy->next;
       }
       if(carry != 0){
        ListNode* t = new ListNode(carry);
        dummy->next = t;
       }

    ListNode* ptr2 = ans->next;
    
       while(ptr2 != NULL){
            ListNode* temp = ptr2->next;
            ptr2->next = pre;
            pre = ptr2;
            ptr2 = temp;
       }
       return pre;
    }
};