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
    vector<int> nextLargerNodes(ListNode* head) {
        ListNode* ptr1 = head;
        vector<int>ans;
        
        while(ptr1 != NULL){
            ListNode* ptr2 = ptr1->next;
            int maxVal =0;
            while(ptr2 != NULL){
                if(ptr1->val < ptr2->val){
                    maxVal = ptr2->val;
                    break;
                }

                ptr2 = ptr2->next;
                
            }
            ptr1 = ptr1->next;
            ans.push_back(maxVal);
        }
        return ans;
    }
};