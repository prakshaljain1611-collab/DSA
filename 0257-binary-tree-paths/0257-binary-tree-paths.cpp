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
    vector<string>ans;
    void solve(TreeNode* root,string &s){
        if(root==NULL){
            return;
        }
            int len =s.size();
          s+=to_string(root->val);
        if(root->left==NULL && root->right==NULL){
           ans.push_back(s);
        }   
        s+="->";
        solve(root->left,s);
        solve(root->right,s);
        s.resize(len);
    }
    vector<string> binaryTreePaths(TreeNode* root) {
        string s;
        solve(root,s);
        return ans;
    }
};