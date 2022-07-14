class Solution {
public:
    vector<int> vt;
    void traverse(TreeNode* root,int k){
        if(root == NULL){
            return;
        }
        traverse(root->left,k);
        vt.push_back(root->val);
        traverse(root->right, k);
    }
    int kthSmallest(TreeNode* root, int k) {
        traverse(root,k);
        
        return vt[k-1];
    }
};