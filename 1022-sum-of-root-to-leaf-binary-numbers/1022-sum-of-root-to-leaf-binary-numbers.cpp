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
       int sum=0;
        string s="";
    void sumroot(TreeNode* root){
        if(root==NULL){
            return;
        }
        s+=root->val+'0';
        if(root->left==NULL && root->right==NULL){
            int num=0;
            for(int i=0;i<s.size();i++){
                num=num*2+(s[i]-'0');
            }
            sum+=num;
            s.pop_back();
            return;
        }
        sumroot(root->left);
        sumroot(root->right);
        s.pop_back();
    }
    int sumRootToLeaf(TreeNode* root) {
        sumroot(root);
        return sum;
    }
};