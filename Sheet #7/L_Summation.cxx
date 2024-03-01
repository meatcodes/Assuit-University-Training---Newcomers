//We pass array in function and it's shortened in size.
//Every function call doesn't have the same array.
#include<bits/stdc++.h>
using namespace std;

long long sum(int n, long long *arr)
{
     if(n==0) return arr[0];

     return arr[0]+sum(n-1, arr+1);
     
}

int main()
{
     int n;
     cin>>n;
     
     long long arr[n];
     for(int i=0; i<n; i++) cin>>arr[i];
     
     cout<<sum(n-1, arr);
     
     return 0;
}

//We pass array in function and it's always same in size.
//Every function call have the same array.
#include<bits/stdc++.h>
using namespace std;

long long sum(int n, long long *arr)
{
     if(n==0) return arr[0];
     
     return arr[n]+sum(n-1, arr);
}

int main()
{
     int n;
     cin>>n;
     
     long long arr[n];
     for(int i=0; i<n; i++) cin>>arr[i];
     
     cout<<sum(n-1, arr);
     
     return 0;
}

//If you dry run these two codes and understand the working of both the codes,
//like what are the differences, how both works, why size changes in one and,
//no size changes in another but still both works and other things...it will help you understand recursion real good.
