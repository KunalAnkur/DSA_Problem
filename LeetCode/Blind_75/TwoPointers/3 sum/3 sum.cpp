class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        
        vector<vector<int>> result;
        sort(nums.begin(), nums.end());

        for (int i = 0; i < nums.size(); i++){
            if(i>0 and nums[i]==nums[i-1]){
                continue;
            }
            int lo = i + 1, hi = nums.size() - 1;
            while(lo<hi){
                if(nums[i]+nums[lo]+nums[hi] > 0){
                    hi--;
                }else if(nums[i]+nums[lo]+nums[hi] < 0){
                    lo++;
                }else{
                    result.push_back({nums[i], nums[lo], nums[hi]});
                    lo++;
                    while(nums[lo] == nums[lo-1] and lo < hi) lo++;
                }
            }
        }
        return result;
    }
};