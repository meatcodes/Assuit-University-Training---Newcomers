#include<bits/stdc++.h>
using namespace std;
int main()
{
     int n;
     cin>>n;
     
     for(int i=1; i<=n; i++)
     {
          bool flag=true;
          for(int j=2; j<=sqrt(i); j++)
          {
               if(i%j==0) 
               {
                    flag=false;
                    break;
               }
          }
          
          if(flag && i!=1) cout<<i<<" ";
     }
     
     return 0;
}
