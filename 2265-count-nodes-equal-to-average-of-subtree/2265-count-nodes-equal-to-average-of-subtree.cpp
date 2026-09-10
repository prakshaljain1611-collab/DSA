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
int ans=0;
   int sum(TreeNode* root,int &count){
    if(root==NULL){
        return 0;
    }

    count++;
    int x = sum(root->left,count);
    int y=sum(root->right,count);
    return root->val+x+y;
   }
   void solve(TreeNode*root){
      if(root==NULL){
        return;
      }
      int count =0;
      int total=sum(root,count);
      int avg=total/count;

      if(root->val==avg){
        ans++;
      }
      solve(root->left);
      solve(root->right);
   }
    int averageOfSubtree(TreeNode* root) {
        solve(root);
        return ans;
    }
};