class Solution {
public:

    // left most -> smallest
    // right most -> largest

    // inorder dfs:
    void dfs(TreeNode* root, int& k, int& ans) {
        if (!root) return;

        dfs(root->left, k, ans);
        if (--k == 0) ans = root->val;
        dfs(root->right, k, ans);
    }

    int kthSmallest(TreeNode* root, int k) {
        int ans = 0;
        dfs(root, k, ans);
        return ans;
    }
};