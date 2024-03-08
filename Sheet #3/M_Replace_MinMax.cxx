#include<bits/stdc++.h>
using namespace std;
int main()
{
     int n;
     cin>>n;
     
     int arr[n];
     for(int i=0; i<n; i++) cin>>arr[i];
     
     int mini=INT_MAX;
     int min_index;
     int maxi=INT_MIN;
     int max_index;
     
     for(int i=0; i<n; i++)
     {
          if(arr[i]>maxi) 
          {
               maxi=arr[i];
               max_index=i;
          }
          if(arr[i]<mini) 
          {
               mini=arr[i];
               min_index=i;
          }
     }
     
     swap(arr[max_index], arr[min_index]);
     
     for(int i=0; i<n; i++) cout<<arr[i]<<" ";
     
     return 0;
}
