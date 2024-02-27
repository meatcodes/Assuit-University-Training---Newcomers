#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;

    int a=0,b=1,c=0;

    if(n==1) cout<<0;
    else
    {
        cout<<0<<" "<<1<<" ";
        int i=2;
        while(i<n)
        {
            c=a+b;
            a=b;
            b=c;
            cout<<c<<" ";
            i++;
        }
    }
    return 0;
}
