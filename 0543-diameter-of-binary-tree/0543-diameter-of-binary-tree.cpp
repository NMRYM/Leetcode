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
int dia=0;
     int ht(TreeNode* root){
        if(root == NULL) return 0;

        int lh = ht(root->left);
        int rh = ht(root->right);
        dia = max(dia, rh+lh);

        return max(lh,rh)+1;
     }
    int diameterOfBinaryTree(TreeNode* root) {
         ht(root);
         return dia;
    }
};