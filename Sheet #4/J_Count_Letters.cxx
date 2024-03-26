//Basic approach.
#include<bits/stdc++.h>
using namespace std;
int main()
{
     string s;
     cin>>s;
     
     int arr[26]={0};
     for(int i=0; i<s.size(); i++)
     {
          int a=s[i]-97;
          arr[a]++;
     }
     
     for(int i=0; i<26; i++)
     {
          if(arr[i]>0)
          {
               cout<<(char)(i+97)<<" : "<<arr[i]<<"\n";
          }
     }
}
