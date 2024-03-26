#include<bits/stdc++.h>
using namespace std;
int main()
{
     string a,b;
     cin>>a>>b;
     
     cout<<a.size()<<" "<<b.size()<<"\n";
     string c=a+b;
     cout<<c<<"\n";
     swap(a[0],b[0]);
     cout<<a<<" "<<b<<"\n";
     
     return 0;
}
