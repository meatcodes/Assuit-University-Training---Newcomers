#include<bits/stdc++.h>
#include<cstring>
using namespace std;
int main()
{
    char s1[200000],f1[200000];
    cin>>s1>>f1;

    char s2[200000],f2[200000];
    cin>>s2>>f2;

    if(strcmp(f1,f2)==0)
    {
        cout<<"ARE Brothers"<<endl;
    }
    else
    {
        cout<<"NOT"<<endl;
    }

    return 0;
}

//Just using string instead of character array
//Instead of doing char comparison in string you can directly compare using comparison operator for strings.
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s1,s11;
    cin>>s1>>s11;
    string s2,s22;
    cin>>s2>>s22;

    if(s11.size()==s22.size())
    {
        bool flag=true;
        for(int i=0; i<s11.size(); i++)
        {
            if(s11[i]!=s22[i]) flag=false;
        }
        cout<<(flag==true?"ARE Brothers":"NOT");
    }
    else
    {
        cout<<"NOT"<<"\n";
    }

    return 0;
}


