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
        ListNode* ptr = head;
        int count = 0;
        while(ptr != NULL){
            count++;
            ptr = ptr->next;
        }   

        if(count == n)return head->next;

        int pos = count - n;
        ListNode* ptr2 = head;

        for(int i=1; i<pos ;i++){
            ptr2 = ptr2->next;
        }
        ptr2->next = ptr2->next->next;

        return head;
    }

};