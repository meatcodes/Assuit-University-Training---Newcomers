#include<bits/stdc++.h>
using namespace std;
int main()
{
     int n,k;
     cin>>n>>k;
     
     int arr[n];
     for(int i=0; i<n; i++) cin>>arr[i];
     
     sort(arr, arr+n);
     
     long long sum=0;
     
     int i=n-1;
     while(k--)
     {
          if(arr[i]>0) sum=sum+arr[i];
          i--;
     }
     
     cout<<sum;
     
     return 0;
}
