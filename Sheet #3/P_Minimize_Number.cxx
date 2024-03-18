//Basic approach.
#include<bits/stdc++.h>
using namespace std;
int main()
{
     int n;
     cin>>n;
     
     int arr[n];
     for(int i=0; i<n; i++) cin>>arr[i];

     int count=INT_MAX;     
     for(int i=0; i<n; i++)
     {
          int lil=0;
          int a=arr[i];
          while(a%2==0)
          {
               lil++;
               a=a/2;
          }
          
          count=min(count, lil);
     }
     
     cout<<count<<"\n";
     
     return 0;
}

//Another approach.
#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int n;
    cin >> n;

    int arr[n];
    for(int i=0; i<n; i++) cin>>arr[i];

    int mini=INT_MAX;
    for(int i=0; i<n; i++)
    {
        mini=min(mini, __builtin_ctz(arr[i]));
    }
    
    cout << mini<<"\n";

    return 0;
}
