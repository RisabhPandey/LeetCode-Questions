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
    int sizeLL(ListNode* head){
        int count =0;
        ListNode* ptr = head;

        while(ptr != NULL){
            count++;
            ptr = ptr->next;
        }
        return count;
    }
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        if(headA == NULL || headB == NULL) return NULL;

        int s1 = sizeLL(headA);
        int s2 = sizeLL(headB);

        int diff = s1-s2;

        ListNode* ptr1 = headA;
        ListNode* ptr2 = headB;
        
        if(diff > 0){ // LL-A is having greater size
            while(diff>0){
            ptr1 = ptr1->next;
            diff--;
            }
        }
        else{ //LL-B is having greater size
            while(diff<0){
                ptr2 = ptr2->next;
                diff++;
            }
        }
        while(ptr1 != ptr2){
            ptr1 = ptr1->next;
            ptr2 = ptr2->next;
        }
        return ptr1;
    }
};