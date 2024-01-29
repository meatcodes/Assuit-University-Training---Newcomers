#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long n,s;
        cin>>n>>s;

        long long sum=(n*(n+1))/2;

        if(s>sum) cout<<-1;
        else 
        {
            for(int i=n; i>0; i--)
            {
                if(s>0)
                {
                    if(i<=s)
                    {
                        cout<<i<<" ";
                        s=s-i;
                    }
                }
            }
        }
        cout<<"\n";
    }
    
    return 0;
}
