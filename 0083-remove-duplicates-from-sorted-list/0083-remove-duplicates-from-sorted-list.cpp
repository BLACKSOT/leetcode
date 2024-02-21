#include <set>

class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        // Check if the list is empty
        if (head == nullptr) {
            return nullptr;
        }

        // Create a set to store unique values
        std::set<int> s;

        // Traverse the original list to insert unique values into the set
        ListNode* temp = head;
        while (temp != nullptr) {
            s.insert(temp->val);
            temp = temp->next;
        }

        // Create a new head pointer for the new list
        ListNode* newHead = nullptr;
        ListNode* tail = nullptr;

        // Traverse the set and create new nodes for the new list
        for (int val : s) {
            ListNode* newNode = new ListNode(val);
            if (newHead == nullptr) {
                newHead = newNode;
                tail = newNode;
            } else {
                tail->next = newNode;
                tail = newNode;
            }
        }

        return newHead;
    }
};
