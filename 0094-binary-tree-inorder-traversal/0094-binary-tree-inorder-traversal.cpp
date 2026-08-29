class Solution {
public:
    void in(vector<int>& res, TreeNode* root) {
        if (root == nullptr) return;

        stack<TreeNode*> s;
        TreeNode* curr = root;

        while (curr != nullptr || !s.empty()) {
            while (curr != nullptr) {
                s.push(curr);
                curr = curr->left;
            }
            curr = s.top();
            s.pop();
            res.push_back(curr->val);
            curr = curr->right;
        }
    }

    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> res;
        in(res, root);
        return res;
    }
};