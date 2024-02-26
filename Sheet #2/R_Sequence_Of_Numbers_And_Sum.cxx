#include<bits/stdc++.h>
using namespace std;
int main()
{
     int n,m;
     while(cin>>n>>m)
     {
          if(n>m) swap(n,m);
          if(n<=0) break;
          
          long long sum=0;
          for(int i=n; i<=m; i++) 
          {
               cout<<i<<" ";
               sum=sum+i;
          }
          cout<<"sum ="<<sum<<"\n";
     }
     return 0;
}
