class Codec {
public:

    // Encodes a tree to a single string.
    string serialize(TreeNode* root) {
        string encode = "";
        if(root == NULL) return "";
        queue<TreeNode* > q;
        q.push(root);
        while(!q.empty()){
            TreeNode* curr = q.front();
            q.pop();
            if(curr == NULL){
                encode += "N|";
                continue;
            }
            encode += to_string(curr->val)+'|';
            if(curr -> left) q.push(curr->left);
            else q.push(NULL);
            if(curr -> right) q.push(curr -> right);
            else q.push(NULL);
        }
        return encode;
    }

    // Decodes your encoded data to tree.
    TreeNode* builder(vector<string> s){
        if(!s.size()) return NULL;
        TreeNode* root = new TreeNode(stoi(s[0]));
        queue<TreeNode*> q;
        int i = 1;
        q.push(root);
        while(i < s.size() - 1){
            TreeNode* curr = q.front();
            q.pop();
            
            string left = s[i];
            string right = s[i + 1];
            
            if(left != "N"){
                curr -> left = new TreeNode(stoi(left));
                q.push(curr -> left);
            }
            if(right != "N"){
                curr -> right = new TreeNode(stoi(right));
                q.push(curr -> right);
            }
            
            i+=2;
            
        }
        return root;
    }
    TreeNode* deserialize(string data) {
        vector<string> encode;
        int start = 0;
        for(int i = 0; i < data.size(); i++){
            if(data[i] == '|'){
                encode.push_back(data.substr(start, i - start));
                i++;
                start = i;
            }
        }
        return builder(encode);
    }
    
};