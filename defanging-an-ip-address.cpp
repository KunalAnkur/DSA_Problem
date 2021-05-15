//https://leetcode.com/problems/defanging-an-ip-address/
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    string defangIPaddr(string address)
    {
        string output = "";
        char dot = '.';
        for (int i = 0; i < address.size(); i++)
        {
            if (address[i] == dot)
            {
                output = output + "[.]";
            }
            else
            {
                output = output + address[i];
            }
        }
        return output;
    }
};