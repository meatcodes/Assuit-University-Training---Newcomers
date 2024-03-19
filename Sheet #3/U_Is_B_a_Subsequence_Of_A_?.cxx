//If a subsequence or not, for not it either should have different order or should have mismatched element.
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;

    int arr[n];
    for(int i=0; i<n; i++) cin>>arr[i];

    int brr[m];
    for(int i=0; i<m; i++) cin>>brr[i];

    int j=0;
    for(int i=0; i<n; i++)
    {
        if(arr[i]==brr[j])
        {
            j++;
        }
    }

    if(j==m) cout<<"YES\n";
    else cout<<"NO\n";

    return 0;
}
