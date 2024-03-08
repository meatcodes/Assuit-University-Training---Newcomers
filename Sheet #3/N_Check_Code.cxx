#include<bits/stdc++.h>
using namespace std;
int main()
{
     int a,b;
     cin>>a>>b;
     
     string s;
     cin>>s;
     
     bool flag=true;
     int count=0;
     for(int i=0; i<s.size(); i++) 
     {
        if(s[i]<'0') count++;
        else if(s[i]>'9') count++;
     }

     if(count<1) cout<<"No\n";
     else if(count>1) cout<<"No\n";
     else 
     {
        if(s[a]=='-') cout<<"Yes\n";
        else cout<<"No\n";
     }     
     
     return 0;
}
