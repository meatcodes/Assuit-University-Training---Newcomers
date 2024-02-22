#include<bits/stdc++.h>
using namespace std;

long long fac(long long n)
{
     if(n==0) return 1;
     
     long long mss=fac(n-1);
     
     return n*mss;
}

int main()
{
     int n;
     cin>>n;
     
     cout<<fac(n);
     
     return 0;
}
