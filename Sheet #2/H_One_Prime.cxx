#include<bits/stdc++.h>
using namespace std;
int main()
{
     int x;
     cin>>x;
     
     bool flag=true;
     
     for(int i=2; i<=sqrt(x); i++)
     {
          if(x%i==0) 
          {
               flag=false;
               break;
          }
     }
     
     if(flag) cout<<"YES\n";
     else cout<<"NO\n";
     
     return 0;
}
