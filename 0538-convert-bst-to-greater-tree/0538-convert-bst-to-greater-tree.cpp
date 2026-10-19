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
    vector<int>ans;
    void solve(TreeNode* root){
         if(root==NULL){
            return;
        }
        solve(root->left);
        ans.push_back(root->val);
        solve(root->right);
    }
    TreeNode* GreaterTree(TreeNode* root){
        if(root==NULL){
            return NULL;
        }
        int val= root->val;
        for(int i=0;i<ans.size();i++){
            if(ans[i]>val){
                root->val+=ans[i];
            }
        }
        GreaterTree(root->left);
        GreaterTree(root->right);
        return root;
    }
    TreeNode* convertBST(TreeNode* root) {
       if(root==NULL){
        return NULL;
       }
       solve(root);
        GreaterTree(root);
        return root;
    }
};