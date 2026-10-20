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
    int findSecondMinimumValue(TreeNode* root) {
        solve(root);
        map<int,int>m;
        for(int x:ans){
            m[x]++;
        }
        if(m.size()<2){
            return -1;
        }
        auto i=m.begin();
        i++;
        return i->first;
    }
};