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
    ListNode* MergeTwoList(ListNode* l1, ListNode* l2){
        ListNode* dummy = new ListNode(-1);
        ListNode* ans = dummy;
        ListNode* ptr1 = l1;
        ListNode* ptr2 = l2;
        while(ptr1 != NULL && ptr2 != NULL){
            if(ptr1->val <= ptr2->val){
                dummy->next = ptr1;
                ptr1 = ptr1->next;
            }
            else{
                dummy->next = ptr2;
                ptr2 = ptr2->next;
            }
            dummy = dummy->next;
        }
        if(ptr1 == NULL) dummy->next = ptr2;
        else dummy->next = ptr1;

        return ans->next;
    }
public:
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        if(lists.size()==0) return NULL;
        else if(lists.size()==1) return lists[0];
        else{
            ListNode* ans = MergeTwoList(lists[0],lists[1]);
            for(int i=2; i<lists.size(); i++){
                ans = MergeTwoList(ans, lists[i]);
            }
            return ans;
        }
    }
};