//The basic approach is to use the nCr formula which is nCr=(n!)/( (n-r)! * (r!) ).
//But this will generate WA because of storage ability of long long.
#include<bits/stdc++.h>
using namespace std;

long long fac(long long a)
{
    if(a==0) return 1;
    return fac(a-1)*a;
}

long long nCr(long long n, long long r)
{
    return fac(n)/(fac(n-r)*fac(r));
}

int main()
{
    long long n,r;
    cin>>n>>r;
    
    cout<<nCr(n,r)<<"\n";
    
    return 0;
}

//Another approach is based on formula of nCr=(n!)/( (n-r)! * (r!) ) but just in improvised way.
//so the nCr=(n!)/( (n-r)! * (r!) ) can be written as nCr=( (nCr-1)*(n-r+1) )/r;
#include<bits/stdc++.h>
using namespace std;

long long nCr(long long n, long long r)
{
    if(r==0) return 1;
    return ( (n-r+1)*nCr(n,r-1) )/r;
}

int main()
{
    long long n,r;
    cin>>n>>r;
    
    cout<<nCr(n,r)<<"\n";
    
    return 0;
}

//Another approach is based on formula of nCr=(n!)/( (n-r)! * (r!) ) but just in improvised way.
//so the nCr=(n!)/( (n-r)! * (r!) ) can be written as nCr=( (n-1Cr-1)*n )/r;
#include<bits/stdc++.h>
using namespace std;

long long nccr(long long n, long long r)
{
     if(r==0) return 1;
     
     return (nccr(n-1,r-1)*n)/r;
}

int main()
{
     long long n,r;
     cin>>n>>r;
     
     cout<<nccr(n,r);
     
     return 0;
}

//Now you know how to implement the combination using nCr formula in three ways but first implementation fails
//and last two are accepted why?
