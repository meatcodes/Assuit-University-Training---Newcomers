#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a;
    cin>>a;

    int n=a;
    cout<<n/365<<" years\n";
    cout<<(n%365)/30<<" months\n";
    cout<<(n%365)%30<<" days\n";
    
    return 0;
}
