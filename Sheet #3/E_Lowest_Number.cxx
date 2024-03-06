#include<bits/stdc++.h>
using namespace std;
int main()
{
     int n;
     cin>>n;
     
     int arr[n];
     for(int i=0; i<n; i++) cin>>arr[i];
     
     int low=INT_MAX;
     int index=-1;
     for(int i=0; i<n; i++)
     {
          if(arr[i]<low)
          {
               low=arr[i];
               index=i;
          }
     }
     
     cout<<low<<" "<<index+1<<"\n";
     
     return 0;
}
