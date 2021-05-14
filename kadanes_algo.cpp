// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

// Function to find subarray with maximum sum
// arr: input array
// n: size of array
int largest(vector<int> arr, int n)
{
    int i;

    // Initialize maximum element
    int max = arr[0];

    // Traverse array elements
    // from second and compare
    // every element with current max
    for (i = 1; i < n; i++)
        if (arr[i] > max)
            max = arr[i];

    return max;
}
int sumArray(vector<int> a, int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum = sum + a[i];
    }

    return sum;
}
int maxSubarraySum(int arr[], int n)
{
    // int iterator = 1;

    vector<int> summedArray;
    for (int z = 0; z < n; z++)
    {
        for (int i = z; i < n; i++)
        {
            vector<int> subArray;
            for (int j = 0; j <= i; j++)
            {
                subArray.push_back(arr[j]);
            }
            summedArray.push_back(sumArray(subArray, n));
        }
    }

    // for (int i = 0; i < summedArray.size(); i++)
    // {
    //     cout << summedArray[i] << " ";
    // }
    return largest(summedArray, summedArray.size());
}

// { Driver Code Starts.

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int t, n;

    cin >> t;   //input testcases
    while (t--) //while testcases exist
    {

        cin >> n; //input size of array

        int a[n];

        for (int i = 0; i < n; i++)
            cin >> a[i]; //inputting elements of array
                         // maxSubarraySum(a, n);
        cout << maxSubarraySum(a, n) << endl;
    }
}
// } Driver Code Ends