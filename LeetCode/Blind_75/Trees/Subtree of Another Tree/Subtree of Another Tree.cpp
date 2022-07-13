class Solution {
public:
    bool isSubtree(TreeNode* root, TreeNode* subRoot) {
        if(root == NULL) return false;
        
        if(root -> val == subRoot -> val and isSame(root, subRoot))
            return true;
        
        return isSubtree(root->left, subRoot) or isSubtree(root->right, subRoot);
    }
    
    bool isSame(TreeNode* p, TreeNode* q){
        if((p != NULL and q == NULL) or (p == NULL and q != NULL)) return false;
        if(p == NULL and q == NULL) return true;
        
        if(p -> val != q -> val) return false;
        
        return isSame(p->left, q->left) and isSame(p->right, q->right);
        
    }
};