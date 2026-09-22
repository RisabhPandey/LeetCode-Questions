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
        ListNode* dummy = new ListNode(-1);
        ListNode* ans = dummy;
        ListNode*ptr1 = l1;
        ListNode*ptr2 = l2;
        int carry =0;
        while(ptr1 != NULL || ptr2 != NULL || carry != 0){
            int sum = carry;

            if(ptr1 != NULL){
                sum += ptr1->val;
                ptr1 = ptr1->next;
            }
            if(ptr2 != NULL){
                sum += ptr2->val;
                ptr2 = ptr2->next;
            }
            
            int digit = sum%10;
            carry = sum/10;

            ListNode* temp = new ListNode(digit);
            dummy->next = temp;
            dummy = dummy->next;
        }
        return ans->next;
    }
};