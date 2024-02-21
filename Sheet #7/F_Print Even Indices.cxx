#include<bits/stdc++.h>
using namespace std;

void heehaw(int n, int *arr)
{
     if(n==0)
     {
          cout<<arr[n]<<"\n";
          return;
     }
     
     if(n%2==0) cout<<arr[n]<<" ";

     heehaw(n-1, arr);
}

int main()
{
     int n;
     cin>>n;
     
     int arr[n];
     for(int i=0; i<n; i++) cin>>arr[i];
     
     heehaw(n-1, arr);
     
     return 0;
}
