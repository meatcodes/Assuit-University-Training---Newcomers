//First time.
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
          
          
          for(int i=0; i<n; i++)
          {
               for(int j=i; j<n; j++)
               {
                    int mas=arr[i];
                    for(int k=i; k<=j; k++) 
                    {
                        if(arr[k]>mas) mas=arr[k];
                    }
                    cout<<mas<<" ";
               }     
          }
     }
     return 0;
}

//Optimised way
#include <bits/stdc++.h>
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

        for(int i=0; i<n; i++)
        {
            int m=arr[i];
            for(int j=i; j<n; j++)
            {
                m=max(m,arr[j]);
                cout<<m<<" ";
            }
        }
        cout<<"\n";
    }
    return 0;
}
