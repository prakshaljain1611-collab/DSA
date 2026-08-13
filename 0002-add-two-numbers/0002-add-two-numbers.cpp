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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        vector<int>m;
        vector<int>n;
         ListNode* temp=l1;
         int a=0,b=0;
         while(temp!=NULL){
            m.push_back(temp->val);
            temp=temp->next;
         }
         temp=l2;
         while(temp!=NULL){
            n.push_back(temp->val);
            temp=temp->next;
         }
        int i=0,j=0,carry=0;
         ListNode* head=NULL;
         ListNode* tail=NULL;
         while(i<m.size() || j<n.size() || carry){
            int sum=carry;
            if(i<m.size()){
                sum+=m[i++];
            }
            if(j<n.size()){
                sum+=n[j++];
            }
            carry=sum/10;

         ListNode* newnode = new ListNode(sum%10);
          if(head==NULL){
            head=tail=newnode;
          }
          else{
             tail->next=newnode;
             tail=tail->next;
          }
         }
         return head;
    }
};