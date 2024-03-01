#include<bits/stdc++.h>
using namespace std;

int findmax(int n, int *arr)
{
    if(n==0) return arr[0];

    return max(arr[n], findmax(n-1, arr));
}

int main()
{
    int n;
    cin>>n;

    int arr[n];
    for(int i=0; i<n; i++) cin>>arr[i];

    cout<<findmax(n-1, arr);

    return 0;
}
