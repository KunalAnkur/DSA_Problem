class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> ans;
        vector<string> temp = strs;
        for(int i = 0; i < temp.size(); i++)
            sort(temp[i].begin(), temp[i].end());
        
        unordered_map<string, vector<int> > mp;
        for(int i = 0; i < temp.size(); i++)
            mp[temp[i]].push_back(i);
        
        
        for(auto it = mp.begin(); it != mp.end(); ++it){
            vector<string> temp1;
            for(auto i : it->second)
                temp1.push_back(strs[i]);
            ans.push_back(temp1);
        }
        
        return ans;
    }
};