class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int prod = 1;
        int prodWZ = 1;
        int totalZero = 0;
        for(auto it: nums){
            prod *= it;
            if(!it) totalZero++;
            if(it) prodWZ *= it;
        }
        if(totalZero <= 1)
            for(int i = 0; i < nums.size(); i++){
                if(nums[i])
                    nums[i] = prod/nums[i];
                else
                    nums[i] = prodWZ;
            }
        else
            for(int i = 0; i < nums.size(); i++)
                nums[i] = 0;
        
        return nums;
            
    }
};