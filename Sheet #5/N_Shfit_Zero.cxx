#include<bits/stdc++.h>
using namespace std;

void shiftright(int n, int arr[])
{
     int j=0;
     for(int i=0; i<n; i++)
     {
          if(arr[i]!=0) 
          {
               arr[j]=arr[i];
               j++;
          }
     }
     
     while(j<n) 
     {
          arr[j]=0;
          j++;
     }
     
     for(int i=0; i<n; i++) cout<<arr[i]<<" ";
}

int main()
{
     int n;
     cin>>n;
     
     int arr[n];
     for(int i=0; i<n; i++) cin>>arr[i];
     
     shiftright(n, arr);
     
     return 0;
}

//there are a lot of way to implement it, use just can print non-zero elements and then all zeroes,
//but remember sometimes you are given a function and you have to return an array so you have to modify your array.
