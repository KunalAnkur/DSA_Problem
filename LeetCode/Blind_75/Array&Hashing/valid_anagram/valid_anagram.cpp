class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char,int> mpS;
        unordered_map<char,int> mpT;
        
        for(auto it : s)
            mpS[it]++;
        for(auto it : t)
            mpT[it]++;
        if(mpS.size() != mpT.size()) return false;
        for(auto it = mpT.begin(); it != mpT.end(); ++it)
            if(mpS[it->first] != it->second) return false;
        
        return true;
        
    }
};