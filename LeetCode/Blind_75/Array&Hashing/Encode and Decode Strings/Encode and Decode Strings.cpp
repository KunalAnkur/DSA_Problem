class Solution {
public:
     vector<int> vt = {0};
    string encode(vector<string> &strs) {
        int count = 0;
        string encr = "$";
        for(auto it: strs){
            encr += it + '$';
            count += it.size() + 1;
            vt.push_back(count);
        }
        for(auto it: vt) cout<<it<<" ";
        return encr;
    }
    vector<string> decode(string &str) {
        vector<string> ans;
        for(int i = 0; i < vt.size() - 1; i++)
            ans.push_back(str.substr(vt[i]+1, vt[i+1] - vt[i] - 1));
        
        return ans;
    }
};