#include<bits/stdc++.h>
using namespace std;
int main()
{
     string s;
     cin>>s;
     
     string t="";

     for(int i=0; i<s.size(); i++)
     {
          if(s[i]=='E' && s[i+1]=='G' && s[i+2]=='Y' && s[i+3]=='P' && s[i+4]=='T')
          {
               t=t+' ';
               i=i+4;
          }
          else t=t+s[i];
     }

     cout<<t;
     
     return 0;
}

//Another approach
#include<bits/stdc++.h>
using namespace std;
int main()
{
     string s;
     cin>>s;

     while(s.find("EGYPT")<s.size())
     {
          s.replace(s.find("EGYPT"),5," ");
     }
     
     cout<<s<<endl;

     return 0;
}
