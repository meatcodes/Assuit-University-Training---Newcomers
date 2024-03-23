#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,q;
    cin>>n>>q;

    long long arr[n];
    for(int i=0; i<n; i++) cin>>arr[i];

    long long brr[n];
    brr[0]=arr[0];
    for(int i=1; i<n; i++)
    {
        brr[i]=brr[i-1]+arr[i];
    }

    while(q--)
    {
        int l,r;
        cin>>l>>r;

        l--;
        r--;

        if(l==0) cout<<brr[r]<<"\n";
        else cout<<brr[r]-brr[l-1]<<"\n";
    }
    
    return 0;
}
