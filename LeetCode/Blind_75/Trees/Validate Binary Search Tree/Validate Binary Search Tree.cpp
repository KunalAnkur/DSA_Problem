class Solution {
public:
    bool isValidBST(TreeNode* root, long int left = LONG_MIN, long int right = LONG_MAX) {
        if(root == NULL) return true;
        
        if(!(left < root -> val and right > root->val)) return false;
        
        return isValidBST(root -> left, left, root -> val) and isValidBST(root -> right, root -> val, right);
    }
};