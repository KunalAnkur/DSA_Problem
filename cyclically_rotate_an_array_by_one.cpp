
#include <stdio.h>

void rotate(int arr[], int n);

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n;
        scanf("%d", &n);
        int a[n], i;
        for (i = 0; i < n; i++)
            scanf("%d", &a[i]);
        rotate(a, n);
        for (i = 0; i < n; i++)
            printf("%d ", a[i]);
        printf("\n");
    }
    return 0;
}
// } Driver Code Ends

void rotate(int arr[], int n)
{
    int cyclicalRotated[n];

    cyclicalRotated[0] = arr[n - 1];

    for (int i = 0; i < n - 1; i++)
    {
        cyclicalRotated[i + 1] = arr[i];
    }

    for (int i = 0; i < n; i++)
    {
        arr[i] = cyclicalRotated[i];
    }
}