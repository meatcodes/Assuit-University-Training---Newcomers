#include<bits/stdc++.h>
using namespace std;

int count(int n, int arr[])
{
     int flag[n]={0};
     int distinct=0;
     
     for(int i=0; i<n; i++)
     {
          if(flag[i]==0)
          {
               distinct++;
               for(int j=i; j<n; j++)
               {
                    if(arr[j]==arr[i]) flag[j]=1;
               }
          }
     }
     
     return distinct;
}

int main()
{
     int n;
     cin>>n;
     
     int arr[n];
     for(int i=0; i<n; i++) cin>>arr[i];
     
     cout<<count(n, arr);
     
     return 0;
}

//you can do it different way, sort and compare adjacent elements and increment the count.
//you can use inbuilt data structure set.
//you can just use loops instead of using extra array.
