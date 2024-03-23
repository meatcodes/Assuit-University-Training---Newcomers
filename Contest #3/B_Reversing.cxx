#include<bits/stdc++.h>
using namespace std;
int main()
{
     int n;
     cin>>n;
     
     int arr[n];
     for(int i=0; i<n; i++) cin>>arr[i];
     
     for(int i=0; i<n; i++)
     {
          if(arr[i]==0)
          {
               for(int j=0, k=i-1; j<k; j++,k--) swap(arr[j], arr[k]);
          }
     }
     
     for(int i=0; i<n; i++) cout<<arr[i]<<" ";
     
     return 0;
}
