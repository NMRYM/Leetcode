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

    void pre(vector<int> &result, TreeNode* node){
        if(node == NULL) return;

        result.push_back(node->val);
        pre(result, node->left);
        pre(result,node->right);
    }
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> result;
        pre(result,root);
        return result;
    }
};