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
    ListNode* deleteDuplicates(ListNode* head) {
        if(head==NULL){
            return NULL;
        }
        set<int> s;
        ListNode* temp = head;
        while(temp!=NULL){
            s.insert(temp->val);
            temp = temp->next;
        }
        ListNode* head1 = NULL;
        ListNode* tail1 = NULL;
        for(int val:s){
            ListNode* temp1 = new ListNode(val);
            if(head1==NULL){
                head1 =temp1;
                tail1=head1;
            }
            else{
            tail1->next=temp1;
            tail1 = temp1;
            }
        }
    return head1;
    }
};