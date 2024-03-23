#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,q;
    cin>>n>>q;

    int arr[n];
    for(int i=0; i<n; i++) cin>>arr[i];

    sort(arr, arr+n);

    while(q--)
    {
        int x;
        cin>>x;

        int start=0;
        int end=n;
        int mid;
        bool flag=false;
        while(start<=end)
        {
            mid=(start+end)/2;
            if(arr[mid]==x) 
            {
                flag=true;
                break;
            }
            else if(arr[mid]>x) end=mid-1;
            else start=mid+1;
        }

        if(flag) cout<<"found\n";
        else cout<<"not found\n";
    }

    return 0;
}
