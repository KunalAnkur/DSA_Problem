//https://leetcode.com/problems/kids-with-the-greatest-number-of-candies/
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    vector<bool> kidsWithCandies(vector<int> &candies, int extraCandies)
    {
        vector<bool> output;
        int childIndex = 0;
        bool status = true;
        while (childIndex < candies.size())
        {
            int distributedChocolate = candies[childIndex] + extraCandies;
            for (int i = 0; i < candies.size(); i++)
            {
                if (!(distributedChocolate >= candies[i]))
                {
                    status = false;
                }
            }
            output.push_back(status);
            childIndex++;
            status = true;
        }
        return output;
    }
};