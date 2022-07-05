class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> set(nums.begin(), nums.end());
        int longest = 0;
        
        for(auto it : nums){
            if(set.find(it - 1) == set.end()){
                int len = 0;
                while(set.find(it + len) != set.end()){
                    len++;
                }
                longest = max(longest, len);
            }
        }
        
        return longest;
    }
};