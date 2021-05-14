//https://leetcode.com/problems/two-sum/
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    vector<int> twoSum(vector<int> &nums, int target)
    {
        vector<int> output;
        int initial = 0;
        while (initial < nums.size())
        {
            for (int j = initial + 1; j < nums.size(); j++)
            {
                if (nums[initial] + nums[j] == target)
                {
                    output.push_back(initial);
                    output.push_back(j);
                }
            }
            initial++;
        }

        return output;
    }
};