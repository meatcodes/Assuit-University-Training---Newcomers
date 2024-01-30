#include<bits/stdc++.h>
using namespace std;

void average(int n, float arr[])
{
     double sum=0;
     
     for(int i=0; i<n; i++) 
     {
          sum=sum+arr[i];
     }
     
     cout<<fixed<<setprecision(7)<<sum/n;
}

int main()
{
     int n;
     cin>>n;
     
     float arr[n];
     for(int i=0; i<n; i++) cin>>arr[i];
     
     average(n, arr);
}
