#include<bits/stdc++.h>
using namespace std;

void print(int n, int a[], int b[])
{
     for(int i=0; i<n; i++) cout<<b[i]<<" ";
     for(int i=0; i<n; i++)
     {
          if(i==n-1) cout<<a[i];
          else cout<<a[i]<<" ";
     }
}

int main()
{
     int n;
     cin>>n;
     
     int a[n], b[n];
     for(int i=0; i<n; i++) cin>>a[i];
     for(int i=0; i<n; i++) cin>>b[i];
     
     print(n, a, b);
     
     return 0;
}
