class Solution {
public:
    ListNode* sortList(ListNode* head) {
        ListNode * aa = NULL;
        ListNode * ab = aa;
        ListNode * ac = head;
        vector<int> a;
        while (ac != NULL)
        {
            a.push_back(ac->val);
            ac = ac->next;
        }
        sort(a.begin(),a.end());
        ac = head;
        int i = 0;
        while (ac != NULL)
        {
            ac->val = a[i++];
            ac =  ac->next;
        }
        return head;
    }
};
