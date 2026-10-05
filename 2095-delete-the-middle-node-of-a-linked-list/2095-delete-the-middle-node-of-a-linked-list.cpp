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
    ListNode* deleteMiddle(ListNode* head) {
        ListNode* ptr1 = head;
        ListNode* ptr2 = head;
        if(head == NULL)return head;
        int n=0;
        while(ptr1 != NULL){
            n++;
            ptr1 = ptr1->next;
        }
        int k = n/2;
        if(k == 0){
            return NULL;
        }
        for(int i=0; i<k-1;i++){
            ptr2 = ptr2->next;
        }
        ptr2->next = ptr2->next->next;

        return head;
    }
};