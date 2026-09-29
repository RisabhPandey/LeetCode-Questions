/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) {
        ListNode* ptr1 = head;
        ListNode* ptr2 = head;
        if((ptr1 == NULL)||(ptr1->next == NULL)) return false;
       while(ptr1 != NULL && ptr1->next != NULL){
        ptr1 = ptr1->next->next;
        ptr2 = ptr2->next;
        if(ptr1 == ptr2)
            return true;
         
       }
    return false;
    }
};