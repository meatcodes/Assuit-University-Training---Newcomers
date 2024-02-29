#include<bits/stdc++.h>
using namespace std;
int main()
{
     int n;
     cin>>n;
     
     int a=n%10;
     int b=n/10;
     
     if(b==0) cout<<"YES\n";
     else if(a%b==0 || b%a==0) cout<<"YES\n";
     else cout<<"NO\n";
     
     return 0;
}

//This is optimised (fun: find the difference).
#include<bits/stdc++.h>
using namespace std;
int main()
{
     int n;
     cin>>n;
     
     int a=n%10;
     int b=n/10;
     
     if( (a%b==0) || (b%a==0) )cout<<"YES\n";
     else cout<<"NO\n";
     
     return 0;
}
