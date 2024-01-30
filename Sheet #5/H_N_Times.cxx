#include<bits/stdc++.h>
using namespace std;

void print(int n, char c)
{
     for(int i=0; i<n; i++) 
     {
          if(i==n-1) cout<<c;
          else cout<<c<<" ";
     }
     cout<<"\n";
}

int main()
{
     int t;
     cin>>t;
     while(t--)
     {
          int n;
          char c;
          cin>>n>>c;
          
          print(n, c);
     }
     
     return 0;
}
