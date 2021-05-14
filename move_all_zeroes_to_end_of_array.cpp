#include <iostream>
using namespace std;
class Solution
{
public:
    void pushZerosToEnd(int arr[], int n)
    {
        int i;
        int j = 0;
        int number_of_zero = 0;
        int formedArr[n];
        for (i = 0; i < n; i++)
        {
            if (arr[i] == 0)
            {
                number_of_zero++;
            }
            else
            {
                formedArr[j] = arr[i];
                j++;
            }
        }
        for (i = 0; i < number_of_zero; i++)
        {
            formedArr[j + i] = 0;
        }
        for (i = 0; i < n; i++)
        {
            arr[i] = formedArr[i];
        }
    }
};

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int t;
    cin >> t;
    while (t--)
    {
        int n, i;
        cin >> n;
        int arr[n];
        for (i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        Solution ob;
        ob.pushZerosToEnd(arr, n);
        for (i = 0; i < n; i++)
        {
            cout << arr[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}