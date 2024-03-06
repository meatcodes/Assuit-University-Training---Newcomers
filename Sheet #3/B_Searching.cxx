#include<bits/stdc++.h>
using namespace std;
int main()
{
     int n;
     cin>>n;
     
     int arr[n];
     for(int i=0; i<n; i++) cin>>arr[i];
     
     int x;
     cin>>x;
     
     bool flag=true;
     
     for(int i=0; i<n; i++) 
     {
          if(arr[i]==x) 
          {
               cout<<i<<"\n";
               flag=false;
               break;
          }
     }
     
     if(flag) cout<<-1<<"\n";
     
     return 0;
}
