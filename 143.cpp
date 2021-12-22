class Solution {
public:
    void reorderList(ListNode* head) {
        vector<int> a;
        ListNode* nhead = head;
        while (nhead != NULL)
        {
            a.push_back(nhead->val);
            nhead = nhead->next;
        }
        int apf = 0;
        int apl = a.size()-1;
        vector<int> b;
        // for(int i = 0;i<a.size();i++)
        while(apf <= apl)
        {
            b.push_back(a[apf]);
            b.push_back(a[apl]);
            apf++;apl--;
        }
        ListNode* nehead = head;
        int count= 0;
        while (nehead != NULL)
        {
           nehead->val = b[count];
            count++;
            nehead = nehead->next;
        }
        
        head = nehead;
    }
};
