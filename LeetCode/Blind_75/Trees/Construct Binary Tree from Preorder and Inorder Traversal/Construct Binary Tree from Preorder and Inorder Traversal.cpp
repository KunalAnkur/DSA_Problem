class Solution {
public:
    TreeNode* solve(vector<int> pre, vector<int> in, int& index, int inStart, int inEnd){
        if(index >= pre.size()) return NULL;
        if(inStart > inEnd) return NULL;
        TreeNode* root = new TreeNode(pre[index]);
        int pos;
        for(pos = inStart; pos <= inEnd; pos++){
            if(pre[index] == in[pos]) break;
        }
        index++;
        root -> left = solve(pre, in, index, inStart, pos - 1);
        root -> right = solve(pre, in, index, pos + 1, inEnd);
        
        return root;
    }
    TreeNode* buildTree(vector<int>& pre, vector<int>& in) {
        int x = 0;
        return solve(pre, in, x, 0, in.size() - 1);
    }
};