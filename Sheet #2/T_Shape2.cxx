#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;

    for(int i=0; i<n; i++)
    {
        for(int j=-(n-1); j<=i; j++)
        {
            if(j>=-i && j<=i) cout<<"*";
            else cout<<" ";
        }
        cout<<endl;
    }

    return 0;
}
