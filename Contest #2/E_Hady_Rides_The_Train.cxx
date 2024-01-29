#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n;
    cin>>n;

    long long row=n/4;

    if(row%2==0)
    {
        cout<<row<<" "<<n%4;
    }
    else
    {
        cout<<row<<" "<<3-n%4;
    }
    return 0;
}
