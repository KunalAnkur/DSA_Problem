class Solution {
public:
    bool isPalindrome(string s) {
        string fs = "";
        for(auto it:s){
            if((tolower(it)>=97 and tolower(it)<=122) or (tolower(it) >= 48 and tolower(it)<=57))
                fs += (char)tolower(it);
        }
        int l = 0, r = fs.size() - 1;
        while(l < r){
            if(tolower(fs[l]) != tolower(fs[r])) return false;
            l++;
            r--;
        }
        return true;
    }
};