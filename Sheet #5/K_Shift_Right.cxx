//Usual approach, doing shift x times.
#include<bits/stdc++.h>
using namespace std;

void print(int n, int x, int arr[])
{
    while(x--)
    {
        int a=arr[n-1];
        for(int i=n-2; i>=0; i--)
        {
            arr[i+1]=arr[i];
        }
        arr[0]=a; 
    }

    for(int i=0; i<n; i++) cout<<arr[i]<<" ";
}

int main()
{
    int n,x;
    cin>>n>>x;

    int arr[n];
    for(int i=0; i<n; i++) cin>>arr[i];

    print(n, x, arr);

    return 0;
}

//Improved approach, observe what would happen on xth move.
#include <iostream>
using namespace std;
int main()
{
    int n,x;
    cin>>n>>x;
  
    int arr[n];
    for(int i=0;i<n;i++)
    {
        int a;
        cin>>a;
        arr[(i+x)%n]=a;
    }
  
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }

    return 0;
}
