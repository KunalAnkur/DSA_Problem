class Solution {
public:
    int findMin(vector<int>& nums) {
        int l = 0, r = nums.size() - 1;
        int mini = nums[0];
        while(l <= r){
            if(nums[l] < nums[r]){ 
                mini = min(mini, nums[l]);
                break;
            }
            int mid = (l + r) / 2;
            mini = min(nums[mid], mini);
            if(nums[mid] >= nums[l])
                l = mid+1;
            else
                r = mid - 1;
        }
        
        return mini;
    }
};