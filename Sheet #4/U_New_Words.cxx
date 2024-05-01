#include<bits/stdc++.h>
using namespace std;
int main()
{
     string s;
     cin>>s;
     
     int arr[5]={0};
     
     for(int i=0; i<s.size(); i++)
     {
          char c=s[i];
          if(c>='A' && c<='Z') c=(char)(s[i]+32);
          
          if(c=='e') arr[0]++;
          else if(c=='g') arr[1]++;
          else if(c=='y') arr[2]++;
          else if(c=='p') arr[3]++;
          else if(c=='t') arr[4]++;
     }
     
     sort(arr, arr+5);
     
     cout<<arr[0]<<"\n";
     
     return 0;
}
