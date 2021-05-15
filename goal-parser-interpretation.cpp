//https://leetcode.com/problems/goal-parser-interpretation/
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    string interpret(string command)
    {
   
    string output = "";
    for (int i = 0; i < command.size(); i++)
    {
        if (command[i] == '(')
        {
            if (command[i + 1] == ')')
            {
                output = output + "o";
            }
            else if (command[i + 1] == 'a')
            {
                output = output + "al";
            }
        }
        else if (command[i] == 'G')
        {
            output = output + "G";
        }
    }
    return output;
    }
};