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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int size = 0;
        ListNode* ptr1 = head;

        while(ptr1 != NULL){
            ptr1 = ptr1->next;
            size++;
        }

        if(size == n)return head->next;
        
        ListNode* ptr2 = head;
        int pos = size - n;
        for(int i=1; i<pos ;i++){
            ptr2 = ptr2->next;
        }
        ptr2->next = ptr2->next->next;

        return head;
    }
};