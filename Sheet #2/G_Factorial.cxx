#include<bits/stdc++.h>
using namespace std;
int main()
{
     int t;
     cin>>t;
     
     while(t--)
     {
          int a;
          cin>>a;
          
          long long fac=1;
          for(int i=1; i<=a; i++)
          {
               fac=fac*i;
          }
          
          cout<<fac<<"\n";
     }
     
     return 0;
}
