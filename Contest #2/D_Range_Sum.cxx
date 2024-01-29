#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long l,r;
        cin>>l>>r;

        if(l>r) swap(l,r);

        long long sum=0;
        long long add=0;

        sum=(r*(r+1))/2;
        add=((l-1)*(l-1+1))/2;

        cout<<sum-add<<"\n";
    }

    return 0;
}
