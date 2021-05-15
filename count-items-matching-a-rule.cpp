//https://leetcode.com/problems/count-items-matching-a-rule/
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int countMatches(vector<vector<string>> &items, string ruleKey, string ruleValue)
    {
        int result = 0;
        int jth;
        if (ruleKey.compare("type") == 0)
        {
            jth = 0;
        }
        else if (ruleKey.compare("color") == 0)
        {
            jth = 1;
        }
        else if (ruleKey.compare("name") == 0)
        {
            jth = 2;
        }

        for (int i = 0; i < items.size(); i++)
        {
            if (items[i][jth].compare(ruleValue) == 0)
            {
                result++;
            }
        }
        return result;
    }
};
