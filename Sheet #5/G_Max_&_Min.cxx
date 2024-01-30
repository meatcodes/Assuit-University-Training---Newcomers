#include <bits/stdc++.h>
using namespace std;

void max_and_min(int n, int arr[])
{
    int maxi = INT_MIN;
    int mini = INT_MAX;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] > maxi)
            maxi = arr[i];
        if (arr[i] < mini)
            mini = arr[i];
    }

    cout << mini << " " << maxi;
}

int main()
{
    int n;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    max_and_min(n, arr);

    return 0;
}
