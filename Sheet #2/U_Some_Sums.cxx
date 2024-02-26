#include<bits/stdc++.h>
using namespace std;
int main()
{
     int n,a,b;
     cin>>n>>a>>b;
     
     long long some=0;
     
     for(int i=1; i<=n; i++)
     {
          int s=i;
          int sum=0;
          while(s>0)
          {
               sum=sum+(s%10);
               s=s/10;
          }
          
          if(sum>=a && sum<=b) some=some+i;
     }
     
     cout<<some<<"\n";
     
     return 0;
}
