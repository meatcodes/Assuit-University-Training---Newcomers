#include<bits/stdc++.h>
using namespace std;

//or you can directly use inbuilt swap(a,b) function.
void doswap(int a, int b)
{
     int s=a;
     a=b;
     b=s;
     
     cout<<a<<" "<<b;
}

int main()
{
     int a,b;
     cin>>a>>b;
     
     doswap(a,b);
     
     return 0;
}
