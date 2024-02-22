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
    bool isPalindrome(ListNode* head) {
        ListNode* tail = head;\
        vector<int> res;
        while(tail!=NULL){
            res.push_back(tail->val);
            tail = tail->next;
        }
        int n = res.size();
        for(int i=0;i<n;i++){
            if(res[i]!=res[--n]){
                return false;
            }
        }
        return true;
    }
};