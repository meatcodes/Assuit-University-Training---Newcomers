//Basic approach.
#include<bits/stdc++.h>
using namespace std;
int main()
{
     int n;
     cin>>n;
     
     int arr[n];
     for(int i=0; i<n; i++) cin>>arr[i];
     
     sort(arr, arr+n);
     
     int count=0;
     for(int i=0; i<n-1; i++)
     {
          for(int j=i+1; j<n; j++)
          {
            if(arr[j]==arr[i]+1) 
            {
                count++;
                break;
            }
          }
     }
     
     cout<<count<<"\n";
     
     return 0;
}

//Optimized approach
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;

    int temp;
    int a[1001]={0};
    for(int i=0;i<n;i++)
    {
        cin>>temp;
        a[temp]++;
    }

    int ans=0;
    for(int i=0;i<1000;i++) if(a[i+1]) ans+=a[i];
    
    cout<<ans;
}
