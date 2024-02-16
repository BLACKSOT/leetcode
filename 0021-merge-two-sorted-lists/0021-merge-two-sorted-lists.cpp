class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        vector<int> a;
        ListNode* head1 = list1;
        ListNode* head2 = list2;
        
        int size1 = 0;
        int size2 = 0;
        ListNode* temp1 = list1;
        ListNode* temp2 = list2;
        while (temp1 != nullptr) {
            size1++;
            temp1 = temp1->next;
        }
        while (temp2 != nullptr) {
            size2++;
            temp2 = temp2->next;
        }
        int q = max(size1, size2);
        
        for (int i = 0; i < q; i++) {
            if (head1 != nullptr) {
                a.push_back(head1->val);
                head1 = head1->next;
            }
            if (head2 != nullptr) {
                a.push_back(head2->val);
                head2 = head2->next;
            }
        }
        sort(a.begin(), a.end());
        
        ListNode* head = nullptr;
        ListNode* tail = nullptr;
        for (int i = 0; i < a.size(); i++) {
            ListNode* temp = new ListNode(a[i]);
            if (head == nullptr) {
                head = tail = temp;
            } else {
                tail->next = temp;
                tail = temp;
            }
        }
        return head;
    }
};
