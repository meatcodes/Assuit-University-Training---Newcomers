#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;

    int arr[n];
    for(int i=0; i<n; i++) cin>>arr[i];

    int brr[100005]={0};
    for(int i=0; i<n; i++)
    {
        brr[arr[i]]++;
    }

    for(int i=1; i<=m; i++)
    {
        cout<<brr[i]<<"\n";
    }

    return 0;
}
