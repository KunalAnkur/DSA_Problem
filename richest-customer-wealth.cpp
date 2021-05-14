//https://leetcode.com/problems/richest-customer-wealth/
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int maximumWealth(vector<vector<int>> &accounts)
    {
        int output;
        vector<int> totalWealth;
        int i = 0;
        while (i < accounts.size())
        {
            int sum = 0;
            for (int j = 0; j < accounts[0].size(); j++)
            {
                sum = sum + accounts[i][j];
            }
            totalWealth.push_back(sum);
            i++;
        }

        output = totalWealth[0];
        i = 0;
        while (i < totalWealth.size())
        {
            if (output < totalWealth[i])
            {
                output = totalWealth[i];
            }
            i++;
        }

        return output;
    }
};