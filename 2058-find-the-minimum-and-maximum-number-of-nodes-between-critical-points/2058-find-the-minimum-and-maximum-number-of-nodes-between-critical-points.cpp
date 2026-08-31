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
    vector<int> nodesBetweenCriticalPoints(ListNode* head) {
        vector<int>m;
        int n=head->val;
        int c=1;
        ListNode* temp=head->next;
        while(temp->next!=NULL){
            if(temp->val<temp->next->val && temp->val<n){
                m.push_back(c);
            }
            if(temp->val>temp->next->val && temp->val>n){
                m.push_back(c);
            }
            c++;
            n=temp->val;
            temp=temp->next;
        }
        if(m.size()<2){
            return {-1,-1};
        }
        int mini=INT_MAX;
        for(int i=0;i<m.size()-1;i++){
            mini=min(mini,m[i+1]-m[i]);
        }
        int maxi=m[m.size()-1]-m[0];
        return {mini,maxi};
    }
};