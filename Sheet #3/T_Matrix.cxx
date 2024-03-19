#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int arr[100][100];
    for(int i = 0; i < n; i++) 
    {
        for(int j = 0; j < n; j++) 
        {
            cin >> arr[i][j];
        }
    }

    long long primary = 0;
    long long secandary = 0;
    for(int i = 0; i < n; i++)
    {
        primary += arr[i][i];
        secandary += arr[i][n - i - 1];
    }

    cout << abs(primary - secandary) << "\n";

    return 0;
}
