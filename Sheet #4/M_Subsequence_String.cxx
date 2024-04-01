#include<bits/stdc++.h>
using namespace std;
int main()
{
     string s;
     cin>>s;
     
     string temp="olleh";
     int count=0;
     
     for(int i=0; i<s.size(); i++)
     {
        if(s[i]==temp[temp.size()-1])
        {
            count++;
            temp.pop_back();
            if(temp.size()==0) break;
        }
     }
       
     if(temp.size()==0) cout<<"YES\n";
     else cout<<"NO\n";
     
     return 0;
}

//Better approach
#include <bits/stdc++.h>
using namespace std;
 
int main() 
{
    string s; 
    cin>>s;

    string t="hello";
    int c=0;

    for(int i=0;i<s.size();i++)
    {
        if(s[i]==t[c]) c++;
    }

    if(c==5) cout<<"YES\n";
    else cout<<"NO\n";
    
	return 0;
}
