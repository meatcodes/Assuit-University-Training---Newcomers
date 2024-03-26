//Basic approach
#include<bits/stdc++.h>
using namespace std;
int main()
{
     int t;
     cin>>t;
     while(t--)
     {
          string s;
          cin>>s;
          
          bool flag=false;
          for(int i=0; i<s.size()-2; i++)
          {
               if(s[i]=='0' && s[i+1]=='1' && s[i+2]=='0') 
               {
                    flag=true;
                    break;
               }
               else if(s[i]=='1' && s[i+1]=='0' && s[i+2]=='1')
               {
                    flag=true;
                    break;
               }
          }
          
          if(flag) cout<<"Good\n";
          else cout<<"Bad\n";
     }
     
     return 0;
}

//Find function
#include<bits/stdc++.h>
using namespace std;
int main()
{
     int t;
     cin>>t;
     while(t--)
     {
          string s;
          cin>>s;
          
          if(s.find("101")!=string::npos || s.find("010")!=string::npos) cout<<"Good\n";
          else cout<<"Bad\n";
     }
     
     return 0;
}
