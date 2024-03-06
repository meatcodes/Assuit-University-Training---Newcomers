#include<bits/stdc++.h>
using namespace std;
int main()
{
     int n;
     cin>>n;
     
     int arr[n];
     for(int i=0; i<n; i++) cin>>arr[i];
     
     int mn=INT_MAX;
     int fq=0;
     
     for(int i=0; i<n; i++) if(arr[i]<mn) mn=arr[i];
     
     for(int i=0; i<n; i++) if(arr[i]==mn) fq++;
     
     if(fq%2==0) cout<<"Unlucky\n";
     else cout<<"Lucky\n";
     
     return 0;
}

//Without using two loops.
#include <bits/stdc++.h>
using namespace std;
int main() 
{
    int n;
    cin >> n;
    
    int arr[n];
    for(int i=0; i<n; i++) cin>>arr[i];
    
    int ans=0;
    int mn=1e6;
    for(int i=0; i<n; i++)
    {
         if(arr[i]==mn) ans++;
         if(arr[i]<mn) 
         {
              mn=arr[i];
              ans=1;
         }
    }
    
    if(ans%2==0) cout<<"Unlucky\n";
    else cout<<"Lucky\n";
    
    return 0;
}
