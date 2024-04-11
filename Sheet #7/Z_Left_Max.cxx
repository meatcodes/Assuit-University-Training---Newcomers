#include <bits/stdc++.h>
using namespace std;

void printmax(int n, int *arr, int i, int leftMax)
{
    if(i==n-1 && leftMax>arr[i])
    {
        cout<<leftMax;
        return;
    }
    if(i==n-1 && arr[i]>leftMax)
    {
        cout<<arr[i];
        return;
    }

    if(arr[i]>leftMax)
    {
        cout<<arr[i]<<" ";
        leftMax=arr[i];
    }
    else cout<<leftMax<<" ";

    printmax(n, arr, i+1, leftMax);
}

int main()
{
    int n;
    cin>>n;

    int arr[n];
    for(int i=0; i<n; i++) cin>>arr[i];

    printmax(n, arr, 0, INT_MIN);
    
	return 0;
}

