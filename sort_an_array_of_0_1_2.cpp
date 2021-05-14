#include <bits/stdc++.h>
using namespace std;
void sort012(int[], int);

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
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        sort012(a, n);

        for (int i = 0; i < n; i++)
        {
            cout << a[i] << " ";
        }

        cout << endl;
    }
    return 0;
}

void sort012(int a[], int n)
{
    int X = 0;
    vector<int> zeroArray;
    vector<int> oneArray;
    vector<int> twoArray;

    for (int i = 0; i < n; i++)
    {
        if (a[i] == 0)
        {

            zeroArray.push_back(a[i]);
        }
        else if (a[i] == 1)
        {
            oneArray.push_back(a[i]);
        }
        else if (a[i] == 2)
        {
            twoArray.push_back(a[i]);
        }
    }
    for (int i = 0; i < zeroArray.size(); i++)
    {

        a[X] = zeroArray[i];
        X++;
    }
    for (int i = 0; i < oneArray.size(); i++)
    {

        a[X] = oneArray[i];
        X++;
    }
    for (int i = 0; i < twoArray.size(); i++)
    {

        a[X] = twoArray[i];
        X++;
    }
}