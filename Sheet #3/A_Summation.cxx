#include<bits/stdc++.h>
using namespace std;
int main()
{
     int n;
     cin>>n;
     
     int arr[n];
     for(int i=0; i<n; i++) cin>>arr[i];
     
     long long sum=0;
     for(int i=0; i<n; i++) sum=sum+arr[i];
     
     cout<<abs(sum)<<"\n";
     
     return 0;
}
