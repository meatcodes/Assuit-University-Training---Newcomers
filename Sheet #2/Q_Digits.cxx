#include<bits/stdc++.h>
using namespace std;
int main()
{
     int t;
     cin>>t;
     while(t--)
     {
          int n;
          cin>>n;

          int a=n;
          int count=0;
          
          if(n==0) cout<<0<<"\n";
          else 
          {
               while(a>0)
               {
                    cout<<a%10<<" ";
                    a=a/10;
               }
               cout<<"\n";
          }
     }
     
     return 0;
}
