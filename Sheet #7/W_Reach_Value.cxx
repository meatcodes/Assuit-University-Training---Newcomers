#include<bits/stdc++.h>
using namespace std;

bool print(long long n, long long value)
{
    if(value==n) return true;
    if(value>n) return false;
    
    
    bool route_10=print(n, value*10);
    bool route_20=print(n, value*20);

    return route_10 || route_20;
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long n;
        cin>>n;

        if(print(n, 1)) cout<<"YES\n";
        else cout<<"NO\n";
    }

    return 0;
}
