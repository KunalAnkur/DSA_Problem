class Solution {
public:
    int maxPathSum(TreeNode* root) {
        vector<int> vt = {root->val};
        dfs(root, vt);
        return vt[0];
    }
    
    int dfs(TreeNode* root, vector<int>& vt){
        if(root == NULL){
            return 0;
        }
        int val = root->val;
        int left = dfs(root->left, vt);
        int right = dfs(root->right, vt);
        left = max(left, 0);
        right = max(right, 0);
        
        vt[0] = max(vt[0], val+left+right);
        return val + max(left, right);
    }
};