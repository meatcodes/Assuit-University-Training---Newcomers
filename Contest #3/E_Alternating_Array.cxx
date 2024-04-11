#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;

    int arr[n];
    int brr[n];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
        brr[i]=arr[i];
    }

    brr[0]=(-1)*brr[0];

    int arr_count=0;
    int brr_count=1;
    for(int i=1; i<n; i++)
    {
        if(arr[i-1]>0 && arr[i]>0)
        {
            arr_count++;
            arr[i]=(-1)*arr[i];
        }
        else if(arr[i-1]<0 && arr[i]<0)
        {
            arr_count++;
            arr[i]=(-1)*arr[i];
        }

        if(brr[i-1]>0 && brr[i]>0)
        {
            brr_count++;
            brr[i]=(-1)*brr[i];
        }
        else if(brr[i-1]<0 && brr[i]<0)
        {
            brr_count++;
            brr[i]=(-1)*brr[i];
        }
    }

    cout<<min(arr_count, brr_count);

    return 0;
}

//Just another way of implementation
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x;
    cin >> x;

    int a[x];

    int c = 0, p = 0;
    for (int i = 0; i <x; i++)
    {
        int n;
        cin >> n;
        if (i % 2 == 1)
        {
            if (n < 0) c++;
            else p++;
        }
        else
        {
            if (n > 0) c++;
            else p++;
        }
    }

    cout << min(c, p);

    return 0;
}
