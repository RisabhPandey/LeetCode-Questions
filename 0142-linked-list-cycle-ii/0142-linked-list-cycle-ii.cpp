#include <unordered_map>

class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        std::unordered_map<ListNode*, bool> visited;
        ListNode* curr = head;
        
        while (curr != nullptr) {
            if (visited[curr]) {
                return curr; // cycle detected
            }
            visited[curr] = true;
            curr = curr->next;
        }
        return nullptr; // no cycle
    }
};
