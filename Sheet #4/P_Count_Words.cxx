#include<bits/stdc++.h>
using namespace std;
int main()
{
     string s;
     getline(cin, s);

     string p="";
     
     int rem=0;
     for(int i=0; i<s.size(); i++)
     {
          s[i]=tolower(s[i]);
          p=p+s[i];
        
          if(s[i]==' ' || s[i]=='!' || s[i]=='?' || s[i]=='.' || s[i]==','  || i==s.size()-1)
          {
               for(int j=0; j<p.size(); j++)
               {
                    if(p[j]>='a' && p[j]<='z') 
                    {
                         rem++;
                         p="";
                         break;
                    }
               }
          }
     }
     
     cout<<rem<<"\n";

     return 0;
}

//Another approach
#include <iostream>
using namespace std;
int main()
{
     string s;
     getline(cin, s);

     int c=0;
     for (int i = 0; i < s.size(); i++)
     {
          if (isalpha(s[i]) && !isalpha(s[i + 1])) c++;
     }
     cout << c;

     return 0;
}
