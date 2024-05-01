#include<bits/stdc++.h>
using namespace std;
int main()
{
    string key =      "PgEfTYaWGHjDAmxQqFLRpCJBownyUKZXkbvzIdshurMilNSVOtec#@_!=.+-*/";
    string original = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";

    int q;
    cin>>q;

    string s;
    cin>>s;

    if(q==1)
    {
        string ans="";
        for(int i=0; i<s.size(); i++)
        {
            for(int j=0; j<63; j++)
            {
                if(s[i]==original[j])
                {
                    ans=ans+key[j];
                    break;
                }
            }
        }
        cout<<ans<<"\n";
    }
    else 
    {
        string ans="";
        for(int i=0; i<s.size(); i++)
        {
            for(int j=0; j<63; j++)
            {
                if(s[i]==key[j])
                {
                    ans=ans+original[j];
                    break;
                }
            }
        }
        cout<<ans<<"\n";
    }

    return 0;
}
