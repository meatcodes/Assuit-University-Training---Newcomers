#include<bits/stdc++.h>
using namespace std;
int main() 
{
    string s;
    cin>>s;

    string arr[5];
    string temp="";
    int ind=0;

    for(int i=0; i<s.size(); i++)
    {
        if(s[i]=='=')
        {

            int j=i+1;
            while (s[j]!='&')
            {
                temp=temp+s[j];
                if(j==s.size()-1) break;
                j++;
            }
        }
        else if( (s[i]=='&') || (i==s.size()-1))
        {
            arr[ind]=temp;
            temp="";
            ind++;
        }
    }

    for(int i=0; i<ind; i++) 
    {
        if(i==0) cout<<"username: "<<arr[i]<<"\n";
        else if(i==1) cout<<"pwd: "<<arr[i]<<"\n";
        else if(i==2) cout<<"profile: "<<arr[i]<<"\n";
        else if(i==3) cout<<"role: "<<arr[i]<<"\n";
        else if(i==4) cout<<"key: "<<arr[i]<<"\n";
    }
    return 0;
}

//another approach
#include <bits/stdc++.h>
using namespace std;
int main()
{ 
    string s1,s2;
    getline(cin,s1,'?');
    while(getline(cin,s2,'='))
    {
        getline(cin,s1,'&');
        cout<<s2<<": "<<s1<<endl;
    }
    return 0;
}

//another approach
#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;   
    cin>>s;   

    int x;
    x=s.find("?"); 

    for(int i=x+1;i<s.size();i++)
    {
        if(s[i]=='=') cout<<": ";
        else if(s[i]=='&') cout<<"\n";
        else cout<<s[i];
    }
    return 0;
}


