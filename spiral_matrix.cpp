#include <iostream>
#include <vector>
using namespace std;

vector<int> spiralOrder(vector<vector<int>> &matrix)
{
    vector<int> spiralOrdered;
    int row = matrix[0].size();
    int column = matrix.size();
    int turner = 0;
    bool left = false;
    bool down = false;
    bool up = false;
    bool right = true;
    while (turner < 5)
    {

        if (right)
        {
            for (int i = matrix[0].size() - row; i < row; i++)
            {
                spiralOrdered.push_back(matrix[matrix[0].size() - row][i]);
            }
            turner++;
            right = false;
            down = true;
            left = false;
            up = false;
            // cout << turner << "1" << endl;
            column--;
            // row--;
        }
        else if (down)
        {
            for (int j = matrix.size() - column; j <= column; j++)
            {
                spiralOrdered.push_back(matrix[j][column]);
            }
            turner++;
            right = false;
            down = false;
            left = true;
            up = false;
            row--;
            // column--;
        }
        else if (left)
        {
            for (int i = row - 1; i >= matrix[0].size() - row; i--)
            {
                spiralOrdered.push_back(matrix[row - 1][i]);
            }
            right = false;
            down = false;
            left = false;
            up = true;
            column--;
            // row--;
            turner++;
        }
        else if (up)
        {
            for (int j = column - 1; j >= matrix.size() - column; j++)
            {
                spiralOrdered.push_back(matrix[j][column - 1]);
            }
            right = true;
            down = false;
            left = false;
            up = false;
            row--;
            // column--;
            turner++;
        }
    }

    return spiralOrdered;
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    vector<vector<int>> array{
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}};

    // spiralOrder(array);
    for (int i = 0; i < spiralOrder(array).size(); i++)
    {
        cout << spiralOrder(array)[i] << " ";
    };

    return 0;
}