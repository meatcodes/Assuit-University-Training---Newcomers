#include<bits/stdc++.h>
using namespace std;
int main()
{
     int t;
     cin>>t;
     while(t--)
     {
          int n;
          cin>>n;
          
          int even=0;
          int odd=0;
          
          int arr[n];
          for(int i=0; i<n; i++) 
          {
               cin>>arr[i];
               if(arr[i]%2==0) even++;
               else odd++;
          }
          
          if(n%2!=0) cout<<-1<<"\n";
          else 
          {
               if(even==odd) cout<<0<<"\n";
               else cout<<(abs(even-odd))/2<<"\n";
          }
     }
     
     return 0;
}
