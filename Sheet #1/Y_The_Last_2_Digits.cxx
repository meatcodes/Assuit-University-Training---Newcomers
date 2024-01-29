#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,d;
    cin>>a>>b>>c>>d;

    long long g = ( (a%100)*(b%100)*(c%100)*(d%100) ) % 100;

    if(g<10)
    {
        cout<<0<<g<<endl;
    }
    else cout<<g<<endl;

    return 0;
}
