//The string way.
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a;
    cin>>a;
    
    string s;
    cin>>s;
    
    long long sum=0;
    for(int i=0; i<s.size(); i++)
    {
        sum = sum + s[i]-'0';
    }
    
    cout<<sum<<"\n";
    
    return 0;
}


