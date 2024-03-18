#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;

    int arr[100][100];
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++) cin>>arr[i][j];
    }

    int x;
    cin>>x;

    bool flag=true;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            if(arr[i][j]==x)
            {
                flag=false;
                break;
            }
        }

        if(!flag) break;
    }

    if(flag) cout<<"will take number\n";
    else cout<<"will not take number\n";


    return 0;
}

//optimise approach
//we know that 2D array is just our representation, in back end it just a 1D array.
#include <bits/stdc++.h>
using namespace std;
main()
{
    int a, b;
    cin >> a >> b;

    int arr[40001];
    for (int i = 0; i < a * b; i++) cin >> arr[i];
    
    int x;
    cin >> x;

    for (int i = 0; i < a * b; i++)
    {
        if (arr[i] == x)
        {
            cout << "will not take number";
            return 0;
        }
    }

    cout << "will take number";

    return 0;
}
