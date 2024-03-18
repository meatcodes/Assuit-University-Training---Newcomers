//First: I am passing the first element form the main function.
//Second: Now, the first element has already been passed so, i passes index=1 form the main function.
//Third: If i pass the index as 0 from main function it would generate error as it should.
#include<bits/stdc++.h>
using namespace std;

bool check(long long sum, int i, int x, int n, int *arr)
{
    if(i==n) return sum==x;

    bool route_plus=check(sum+arr[i], i+1, x, n, arr);       //take plus
    bool route_minus=check(sum-arr[i], i+1, x, n, arr);      //take minus

    return route_minus || route_plus;                        //if either route_plus or route_minus merges
}

int main()
{
    int n,x;
    cin>>n>>x;

    int arr[n];
    for(int i=0; i<n; i++) cin>>arr[i];

    if(check(arr[0], 1, x, n, arr)) cout<<"YES\n";
    else cout<<"NO\n";

    return 0;
}

//Second approch.
#include<bits/stdc++.h>
using namespace std;

long long check(long long sum, int i, int x, int n, int *arr)
{
    if(i==n-1) return sum==x;

    long long route_plus=check(sum+arr[i+1], i+1, x, n, arr);
    long long route_minus=check(sum-arr[i+1], i+1, x, n, arr);

    return route_minus || route_plus;
}

int main()
{
    int n,x;
    cin>>n>>x;

    int arr[n];
    for(int i=0; i<n; i++) cin>>arr[i];

    if(check(arr[0], 0, x, n, arr)==1) cout<<"YES\n";
    else cout<<"NO\n";

    return 0;
}
