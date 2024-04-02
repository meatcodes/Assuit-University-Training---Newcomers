#include<bits/stdc++.h>
using namespace std;
int main() 
{
    string s;
    cin>>s;

    string arr[501];
    int ind=0;
    string temp="";

    int L=0;
    int R=0;

    for(int i=0; i<s.size(); i++)
    {
        if(s[i]=='L') 
        {
            L++;
            temp=temp+s[i];
        }
        else if(s[i]=='R') 
        {
            R++;
            temp=temp+s[i];
        }

        if(R==L)
        {
            arr[ind]=temp;
            temp="";
            L=0;
            R=0;
            ind++;
        }
    }    

    cout<<ind<<"\n";
    for(int i=0; i<ind; i++) cout<<arr[i]<<"\n";   
    
    return 0;
}


