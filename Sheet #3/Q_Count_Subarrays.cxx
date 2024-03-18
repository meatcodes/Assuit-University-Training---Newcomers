//Brute force: Create the subarray and increment count if it is non-decreasing.
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

        int count=0;
        for(int i=0; i<n; i++)
        {
            for(int j=i; j<n; j++)
            {
                bool flag=true;
                for(int k=i; k<j; k++)
                {
                    if(arr[k]>arr[k+1])
                    {
                        flag=false;
                        break;
                    }
                }

                if(flag) count++;
            }
        }

        cout<<count<<"\n";
    }
    
    return 0;
}

//Optimised approach.
#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x;
        cin >> x;

        long long arr[x];
        for (int i = 0; i < x; i++) cin >> arr[i];

        int count = x;
        for (int i = 0; i < x-1; i++)
        {
            for (int j = i + 1; j < x; j++)
            {
                if (arr[j] < arr[j - 1]) break;
                else count++;
            }
        }
        cout << count << endl;
    }
    return 0;
}
