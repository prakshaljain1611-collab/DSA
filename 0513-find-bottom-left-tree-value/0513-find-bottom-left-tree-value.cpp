/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:

    int findBottomLeftValue(TreeNode* root) {
        TreeNode* ans=NULL;
       queue<TreeNode*>q;
       q.push(root);
       while(q.size()>0){
        int n=q.size();
        for(int i=0;i<n;i++){
            TreeNode* curr=q.front();
            q.pop();
            if(i==0){
                ans=curr;
            }
            if(curr->left!=NULL){
                q.push(curr->left);
            }
            if(curr->right!=NULL){
                q.push(curr->right);
            }
        }
       }
       return ans->val;
    }
};