class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> ans;
        
        unordered_map<int,pair<int,int>> mp;
        
        for(int i = 0; i < nums.size(); i++){
            if(mp[target - nums[i]].first != 0){
                ans.push_back(i);
                ans.push_back(mp[target - nums[i]].second);
            }
            else{
                mp[nums[i]].first++;
                mp[nums[i]].second = i;
            }
        }
        
        
        return ans;
    }
};