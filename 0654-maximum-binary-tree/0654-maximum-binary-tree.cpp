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
    TreeNode* solve(vector<int> &nums,int st,int end){
        if(st>end){
            return NULL;
        }
        int maxi = max_element(nums.begin()+st,nums.begin()+end+1)-nums.begin();
        TreeNode* root=new TreeNode(nums[maxi]);
        root->left=solve(nums,st,maxi-1);
        root->right=solve(nums,maxi+1,end);
        return root;
    }
    TreeNode* constructMaximumBinaryTree(vector<int>& nums) {
        int n=nums.size();
        int st=0;
        int end= n-1;
        return solve(nums,0,n-1);
    }
};