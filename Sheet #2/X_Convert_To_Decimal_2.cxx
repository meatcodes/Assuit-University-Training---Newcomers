#include<bits/stdc++.h>
using namespace std;
int main()
{
     int t;
     cin>>t;
     while(t--)
     {
          long long n;
          cin>>n;
          
          int count=0;
          while(n>0)
          {
               if(n%2==1) count++;
               n=n/2;
          }

          long long ss=0;
          
          for(int i=0; i<count; i++)
          {
               ss=ss+pow(2,i);
          }
          
          cout<<ss<<"\n";
     }

     return 0;
}
