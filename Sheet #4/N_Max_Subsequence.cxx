#include <bits/stdc++.h>
using namespace std;
 
int main() 
{
    int n;
    cin>>n;

    string s; 
    cin>>s;

    string t="";
    t=t+s[0];
    int c=0;

    for(int i=0;i<s.size();i++)
    {
        if(s[i]!=t[c]) 
        {
            c++;
            t=t+s[i];
        }
    }

    cout<<t.size()<<"\n";

	  return 0;
}

//Another
#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n;
  cin>>n;
  
  string s;
  cin>>s;

  int c=0;
  for(int i=0;i<n-1;i++) if(s[i]!=s[i+1]) c++;
  
  cout<<c;

  return 0;
}
