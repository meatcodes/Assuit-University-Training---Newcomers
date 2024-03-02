//One way.
#include<bits/stdc++.h>
using namespace std;

int lg(long long n)
{
     if(n==0) return 0;
     
     return 1+lg(n/2);
}

int main()
{
     long long n;
     cin>>n;
     
     cout<<lg(n)-1;
     
     return 0;
}

//Another way.
#include <bits/stdc++.h>
using namespace std;

int rec(long long x)
{
    if (x == 1) return 0;
    else return rec(x / 2) + 1;
}

int main()
{
    long long x; 
    cin>>x;

    cout<<rec(x)<<"\n";

    return 0;
}
