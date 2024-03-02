#include<bits/stdc++.h>
using namespace std;

int seq(int n)
{
     if(n==1) return 1;
     
     if(n%2==0) n=n/2;
     else n=3*n+1;
     
     return 1+seq(n);
}

int main()
{
     int n;
     cin>>n;
     
     cout<<seq(n);
     
     return 0;
}
