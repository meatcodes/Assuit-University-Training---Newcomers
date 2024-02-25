#include<bits/stdc++.h>
using namespace std;
int main()
{
     int n;
     cin>>n;
     
     int ma=-1;
     for(int i=0; i<n; i++)
     {
          int a;
          cin>>a;
          
          if(a>ma) ma=a;
     }
     
     cout<<ma<<"\n";
     
     return 0;
}
