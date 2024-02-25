#include<bits/stdc++.h>
using namespace std;
int main()
{
     int n;
     cin>>n;
     
     int s=n;
     
     int a=0;
     while(s>0)
     {
          a=(a*10)+(s%10);
          s=s/10;
     }
     
     cout<<a<<"\n";
     if(n==a) cout<<"YES\n";
     else cout<<"NO\n";
     
     return 0;
}
