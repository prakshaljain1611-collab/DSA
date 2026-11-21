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
    vector<vector<int>>ans;
    void solve(TreeNode* root, int targetsum, vector<int> &path){
        if(root==NULL){
            return;
        }
        path.push_back(root->val);
        targetsum-=root->val;
        if(root->left==NULL && root->right==NULL){
            if(targetsum==0){
                ans.push_back(path);
            }
        }
        solve(root->left,targetsum,path);
        solve(root->right,targetsum,path);
        path.pop_back();
    }
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        vector<int>path;
        solve(root,targetSum,path);
        return ans;
    }
};