#include<bits/stdc++.h>
using namespace std;
int main() 
{
    int n;
    cin>>n;

	  string s;
	  cin>>s;

    int total=0;
    for(int i=0; i<s.size(); i++)
    {
        if(s[i]=='V') total=total+5;       
        else if(s[i]=='W') total=total+2;  
        else if(s[i]=='Y' && (i!=s.size()-1))                 
        {
            char st=s[i+1];
            //s.erase(s.begin()+(i+1)); //erase function casing tle
            s.push_back(st);
            s[i+1]='0';
        }
        else if(s[i]=='Z')
        {
            if(s[i+1]=='V' && (i!=s.size()-1)) 
            {
                total=total/5;
                //s.erase(s.begin()+(i+1));  //erase function causing tle
                s[i+1]='0';
            }
            else if(s[i+1]=='W' && (i!=s.size()-1)) 
            {
                total=total/2;
                //s.erase(s.begin()+(i+1));  //erase function causing tle
                s[i+1]='0';
            }
        }
        else if(s[i]=='X' && (i!=s.size()-1))
        {
            //s.erase(s.begin()+(i+1));   //erase function causing tle
            s[i+1]='0';
        }
    }

    cout<<total<<"\n";
    
    return 0;
}


