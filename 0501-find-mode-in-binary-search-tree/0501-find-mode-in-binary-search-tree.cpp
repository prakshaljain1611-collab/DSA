/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left),
 * right(right) {}
 * };
 */
class Solution {
public:
    vector<int> ans;
    unordered_map<int,int>m;
    void solve(TreeNode* root) {
        if (root == NULL) {
            return;
        }
        ans.push_back(root->val);
        solve(root->left);
        solve(root->right);
    }
    vector<int> findMode(TreeNode* root) {
        solve(root);
        for (int x : ans) {
            m[x]++;
        }
        int mx = 0;
        for (auto x : m) {
            mx = max(mx, x.second);
        }
        vector<int>res;
        for(auto x:m){
            if(x.second==mx){
                res.push_back(x.first);
            }
        }
        return res;
    }
};