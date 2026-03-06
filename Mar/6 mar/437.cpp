class Solution {
public:
    int ans = 0;
    void dfs(TreeNode* root, long targetSum) {
        if(root == NULL) return;
        if(root->val == targetSum) ans++;
        dfs(root->left, targetSum - root->val);
        dfs(root->right, targetSum - root->val);
    }

    int pathSum(TreeNode* root, int targetSum) {
        if(root == NULL) return 0;
        dfs(root, targetSum);
        pathSum(root->left , targetSum);
        pathSum(root->right , targetSum);

        return ans;
    }
};