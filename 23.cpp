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
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        if(lists.size()==0)                //empty
            return NULL;
        ListNode* res=NULL; //head pointer for return
        priority_queue<int, vector<int>, greater<int>> pq;  //min heap from priority queue
        int count=0;
        for(int i=0;i<lists.size();i++){
            ListNode* temp=lists[i];
            while(temp){
                pq.push(temp->val);         //pushing element in the min heap
                temp=temp->next;
                count++;                         //counting number of nodes
            }
        }
        ListNode* x=NULL; //traversing pointer
        while(count){
            ListNode* temp=new ListNode(pq.top());
            temp->next=NULL;
            pq.pop();
            if(!res){
                res=temp;     //head pointer
                x=temp;
            }
            else{
                x->next=temp;
                x=x->next;
            }
            count--;
        }     
        return res;
    }
};
