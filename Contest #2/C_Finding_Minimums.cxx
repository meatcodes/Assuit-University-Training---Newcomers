#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k;
    cin>>n>>k;

    int arr[n];
    for(int i=0; i<n; i++) cin>>arr[i];

    for(int i=0; i<n; )
    {
        if(i+k<=n) sort( arr+i, arr+i+k );
        else sort(arr+i, arr+n);

        cout<<arr[i]<<" ";

        i=i+k;
    }

    return 0;
}
