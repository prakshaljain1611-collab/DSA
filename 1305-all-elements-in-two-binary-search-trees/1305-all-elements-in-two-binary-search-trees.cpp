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
    vector<int>a,b;
    void tree1(TreeNode* root1){
        if(root1==NULL){
            return;
        }
        tree1(root1->left);
        a.push_back(root1->val);
        tree1(root1->right);
    }
     void tree2(TreeNode* root2){
        if(root2==NULL){
            return;
        }
        tree2(root2->left);
        b.push_back(root2->val);
        tree2(root2->right);
    }
    vector<int> getAllElements(TreeNode* root1, TreeNode* root2) {
        tree1(root1);
        tree2(root2);
        vector<int>ans;
        int i=0,j=0;
        while(i<a.size() && j<b.size()){
            if(a[i]<b[j]){
                ans.push_back(a[i++]);
            }
            else{
                ans.push_back(b[j++]);
            }
        }
        while(i<a.size()){
            ans.push_back(a[i++]);
        }
        while(j<b.size()){
            ans.push_back(b[j++]);
        }
        return ans;
    }
};