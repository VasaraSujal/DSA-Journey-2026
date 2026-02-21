class Solution {
public:
    int ans;
    void dfs(TreeNode* root, int max_val) {
        if (!root)
            return;
        if (root->val >= max_val) {
            ans++;
            max_val = max(root->val, max_val);
        }
        dfs(root->left, max_val);
        dfs(root->right, max_val);
        return;
    }
    int goodNodes(TreeNode* root) {
        if (!root)
            return 0;
        ans = 1;
        dfs(root->left, root->val);
        dfs(root->right, root->val);
        return ans;
    }
};