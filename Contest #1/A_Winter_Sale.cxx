#include<bits/stdc++.h>
#include<iomanip>
using namespace std;
int main()
{
    float x,p;
    cin>>x>>p;

    float y=(p*100)/(100-x);

    cout<<fixed<<setprecision(2)<<y<<endl;
    return 0;
}
