#include<bits/stdc++.h>
#include<cstring>
using namespace std;
int main()
{
    char x;
    cin>>x;
    int a=x;
    if(a>=97 && a<=122)
    {
        cout<<"ALPHA"<<endl;
        cout<<"IS SMALL"<<endl;
    }
    else if(a>=65 && a<=90)
    {
        cout<<"ALPHA"<<endl;
        cout<<"IS CAPITAL"<<endl;
    }
    else if(a>=48 && a<=57)
    {
        cout<<"IS DIGIT"<<endl;
    }
    return 0;
}
