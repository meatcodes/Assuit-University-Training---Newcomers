#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;

    int arr[n];
    for(int i=0; i<n; i++) cin>>arr[i];

    int brr[n];
    for(int i=0; i<n; i++) cin>>brr[i];

    int count=0;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {  
            if(arr[i]==brr[j])
            {
                count++;
                brr[j]=-1;
                break;
            }
        }
    }

    if(count==n) cout<<"yes\n";
    else cout<<"no\n";


    return 0;
}

//Optimised approach
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;

    int arr[n];
    for(int i=0; i<n; i++) cin>>arr[i];

    int brr[n];
    for(int i=0; i<n; i++) cin>>brr[i];

    sort(arr, arr+n);
    sort(brr, brr+n);
     
    bool flag=true;
    for(int i=0; i<n; i++)
    {
         if(arr[i]!=brr[i]) 
         {
               flag=false;
               cout<<"no\n";
               break;
         }
    }

    if(flag) cout<<"yes\n";

    return 0;
}

//Another approach.
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;

    long long sum=0;
    int arr[n];
    for(int i=0; i<n; i++) 
    {
         cin>>arr[i];
         sum=sum+arr[i];
    }

    int brr[n];
    for(int i=0; i<n; i++) 
    {
         cin>>brr[i];
         sum=sum-brr[i];
    }

    if(sum==0) cout<<"yes\n";
    else cout<<"no\n";

    return 0;
}
