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
    TreeNode* head= new TreeNode(-1);
    TreeNode* curr = head;
    void right(TreeNode* root){
        if(root==NULL){
            return;
        }
        right(root->left);
        curr->right= new TreeNode(root->val);
        curr=curr->right;
        right(root->right);
    }
    TreeNode* increasingBST(TreeNode* root) {
        right(root);
        return head->right;
    }
};