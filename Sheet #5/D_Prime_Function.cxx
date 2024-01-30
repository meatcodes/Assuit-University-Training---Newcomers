#include<bits/stdc++.h>
using namespace std;

void checkPrime(int n)
{
     bool flag=true;
     for(int i=2; i<=sqrt(n); i++)
     {
          if(n%i==0) 
          {
               flag=false;
               break;
          }
     }
     
     if(flag) cout<<"YES\n";
     else cout<<"NO\n";
}

int main()
{
     int t;
     cin>>t;
     while(t--)
     {
          int n;
          cin>>n;
          
          if(n==0 || n==1) cout<<"NO\n";
          else checkPrime(n);
     }
     
     return 0;
}
