// https://leetcode.com/problems/candy/
class Solution
{
public:
    int candy(vector<int> &ratings)
    {
        vector<int> leftC(ratings.size(), 1);
        vector<int> rightC(ratings.size(), 1);

        for (int i = 1; i < ratings.size(); i++)
        {
            if (ratings[i - 1] < ratings[i])
            {
                leftC[i] = leftC[i - 1] + 1;
            }
        }
        for (int i = ratings.size() - 2; i >= 0; i--)
        {
            if (ratings[i] > ratings[i + 1])
            {
                rightC[i] = rightC[i + 1] + 1;
            }
        }

        int sum = 0;
        for (int i = 0; i < rightC.size(); i++)
            sum += max(rightC[i], leftC[i]);
        return sum;
    }
};