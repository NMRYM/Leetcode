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

    void in( vector<int> &res, TreeNode* root){
        if(root == NULL) return;

        stack<TreeNode*> s;

        TreeNode* curr = root;
        bool done = false;

        while(!done){
            if(curr !=NULL) {
                s.push(curr);
                curr = curr->left;
            }else{
                if(!s.empty()){
                    curr= s.top();
                    s.pop();
                    res.push_back(curr->val);
                    curr = curr->right;
                }else{
                    done = true;
                }
            }
        }
    }
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> res;
        in(res, root);
        return res;
    }
};