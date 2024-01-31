#include<bits/stdc++.h>
using namespace std;

//function to find maximum element
int maxi(int n, int arr[])
{
     int maxe=INT_MIN;
     for(int i=0; i<n; i++)
     {
          if(arr[i]>maxe) maxe=arr[i];
     }
     
     return maxe;
}

//function to find minimum element
int mini(int n, int arr[])
{
     int mine=INT_MAX;
     for(int i=0; i<n; i++)
     {
          if(arr[i]<mine) mine=arr[i];
     }
     
     return mine;
}

//function to find the number of prime elements
int primecount(int n, int arr[])
{
     int count=0;

     for(int i=0; i<n; i++)
     {
          bool flag=true;
          
          if(arr[i]==1) flag=false;
          else 
          {
               for(int j=2; j<=sqrt(arr[i]); j++)
               {
                    if(arr[i]%j==0) 
                    {
                         flag=false;
                         break;
                    }
               }
          
               if(flag) count++;
          }
     }
     
     return count++;
}

//function to find number fo palindrome elements
int palincount(int n, int arr[])
{
     int count=0;
     
     for(int i=0; i<n; i++)
     {
          string str=to_string(arr[i]);
          string s=str;
          reverse(str.begin(), str.end());
          
          if(s==str) count++;
     }
     
     return count;
}

//function to find elements with maximum number of divisor
int maxdivisor(int n, int arr[])
{
     int max_value=0;
     int max_count=0;
     
     for(int i=0; i<n; i++)
     {
          int count=0;
          for(int j=1; j<=arr[i]; j++)
          {
               if(arr[i]%j==0)
               {
                    count++;
               }
          }
          
          if(count>max_count)
          {
               max_count=count++;
               max_value=arr[i];
          }
          else if(count==max_count)
          {
               max_count=count;
               max_value=max(max_value, arr[i]);
          }
     }
     
     return max_value;
}

int main()
{
     int n;
     cin>>n;
     
     int arr[n];
     for(int i=0; i<n; i++) cin>>arr[i];
     
     cout<<"The maximum number : "<<maxi(n, arr)<<"\n";
     cout<<"The minimum number : "<<mini(n, arr)<<"\n";
     cout<<"The number of prime numbers : "<<primecount(n, arr)<<"\n";
     cout<<"The number of palindrome numbers : "<<palincount(n, arr)<<"\n";
     cout<<"The number that has the maximum number of divisors : "<<maxdivisor(n, arr)<<"\n";
     
     return 0;
}
