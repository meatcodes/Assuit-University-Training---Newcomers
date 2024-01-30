#include<bits/stdc++.h>
using namespace std;

void exchange(int n, int x, int y, int arr[501][501])
{
    for(int j=0; j<n; j++)
    {
        swap(arr[x][j], arr[y][j]);
    }

    for(int i=0; i<n; i++)
    {
        swap(arr[i][x], arr[i][y]);
    }

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++) 
        {
            if(j!=n-1)cout<<arr[i][j]<<" ";
            else cout<<arr[i][j];
        }
        cout<<"\n";
    }
}

int main()
{
    int n,x,y;
    cin>>n>>x>>y;

    int arr[501][501];
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++) cin>>arr[i][j];
    }

    exchange(n, x-1, y-1, arr);

    return 0;
}
