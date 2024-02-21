#include<bits/stdc++.h>
using namespace std;

void print(int n)
{
     if(n/10==0)
     {
          cout<<n<<" ";
          return;
     }
     
     print(n/10);
     
     cout<<n%10<<" ";
}

int main()
{
     int t;
     cin>>t;
     while(t--)
     {
          int n;
          cin>>n;
     
          print(n);
          cout<<"\n";
     }
     
     return 0;
}
