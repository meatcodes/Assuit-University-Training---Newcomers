//First: use two pointer and compare characters.

//Second: Reverse the string and then compare.
#include<bits/stdc++.h>
using namespace std;
int main()
{
     string s;
     cin>>s;
     
     string str=s;
     reverse(str.begin(), str.end());
     
     if(s==str) cout<<"YES\n";
     else cout<<"NO\n";
     
     return 0;
}
