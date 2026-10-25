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
    bool isEvenOddTree(TreeNode* root) {
        int j = 0;
        queue<TreeNode*> q;
        q.push(root);
        while (q.size() > 0) {
            int n = q.size();
            vector<int> level;
            for (int i = 0; i < n; i++) {
                TreeNode* curr = q.front();
                q.pop();
                level.push_back(curr->val);
                if (curr->left != NULL) {
                    q.push(curr->left);
                }
                if (curr->right != NULL) {
                    q.push(curr->right);
                }
            }
            if (j % 2 == 0) {
                for (int i = 0; i < level.size(); i++) {
                    if (level[i] % 2 == 0) {
                        return false;
                    }
                    if (i < level.size() - 1 && level[i] >= level[i + 1]) {
                        return false;
                    }
                }
            } else {
                for (int i = 0; i < level.size(); i++) {
                    if (level[i] % 2 != 0) {
                        return false;
                    }
                    if (i < level.size() - 1 && level[i] <= level[i + 1]) {
                        return false;
                    }
                }
            }
            j++;
        }
        return true;
    }
};