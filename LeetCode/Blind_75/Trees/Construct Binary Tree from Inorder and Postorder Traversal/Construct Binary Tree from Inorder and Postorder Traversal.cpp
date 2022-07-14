class Solution {
public:
    TreeNode* solve(vector<int> inorder, vector<int> postorder, int& index, int inStart, int inEnd){
        if(index < 0) return NULL;
        if(inStart > inEnd) return NULL;
        TreeNode* root = new TreeNode(postorder[index]);
        int pos;
        for(pos = inStart; pos <= inEnd; pos++)
            if(inorder[pos] == postorder[index]) break;
        index--;
        
        root -> right = solve(inorder, postorder, index, pos + 1, inEnd);
        root -> left = solve(inorder, postorder, index, inStart, pos - 1);
        return root;
    }
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
        int x = postorder.size() - 1;
        return solve(inorder, postorder, x, 0, inorder.size() - 1);        
    }
};