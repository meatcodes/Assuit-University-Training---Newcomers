#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;

    int a[100][100];
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++) cin>>a[i][j];
    }

    for(int i=0,j=m-1; i<j; i++,j--)
    {
        for(int s=0; s<n; s++)
        {
            swap(a[s][i], a[s][j]);
        }
    }

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<"\n";
    }


    return 0;
}
