#include<bits/stdc++.h>
using namespace std;

long long sufsum(int n, int m, int *arr)
{
     if(m==0) return arr[n];
     
     return arr[n]+sufsum(n-1, m-1, arr);
}

int main()
{
     int n,m;
     cin>>n>>m;
     
     int arr[n];
     for(int i=0; i<n; i++) cin>>arr[i];
     
     cout<<sufsum(n-1,m-1,arr);
     
     return 0;
}
