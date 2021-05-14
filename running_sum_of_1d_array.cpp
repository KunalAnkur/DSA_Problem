//https://leetcode.com/problems/running-sum-of-1d-array/
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    vector<int> runningSum(vector<int> &nums)
    {
        vector<int> output;
        int limitSize = 1;
        while (limitSize <= nums.size())
        {
            int sum = 0;
            for (int i = 0; i < limitSize; i++)
            {
                sum = sum + nums[i];
            }
            output.push_back(sum);
            limitSize++;
        }

        return output;
    }
};