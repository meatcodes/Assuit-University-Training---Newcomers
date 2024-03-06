#include<bits/stdc++.h>
using namespace std;
int main()
{
     int t;
     cin>>t;
     while(t--)
     {
          int n;
          cin>>n;
     
          int arr[n];
          for(int i=0; i<n; i++) cin>>arr[i];
          
          long long small=LLONG_MAX;
          long long kmall=0;
          for(int i=0; i<n-1; i++)
          {
               for(int j=i+1; j<n; j++)
               {
                    kmall=arr[i]+arr[j]+j-i;
                    small=min(small,kmall);
               }               
          }
          
          cout<<small<<"\n";
     }
     return 0;
}

//O(n)
#include <bits/stdc++.h>
using namespace std;
int main() 
{
    int t;
    cin>>t;
    while(t--) 
    {
        int n;
        cin >> n;
      
        int a;
        int mn = 1e7;
        int ans = 1e7;
        for (int i = 0; i < n; i++) 
        {
            cin >> a;
            ans = min(ans, mn + a + i);
            mn = min(mn, a - i);
        }
        cout << ans << endl;
    }
  return 0;
}
