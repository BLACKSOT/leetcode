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
    ListNode* reverseList(ListNode* head) {
        vector<int> result;
        ListNode* temp = head;
        int size=0;
        while(temp!=NULL){
            size=size+1;
            temp = temp->next;
        }
        for(int i=0;i<size;i++){
            result.push_back(head->val);
            head = head->next;
        }
        ListNode* reverse=NULL;
        for(int i=0;i<result.size();i++){
            ListNode* temp = new ListNode(result[i]);
            temp->next = reverse;
            reverse = temp;  
        }
        return reverse;
    }
};