#include<bits/stdc++.h>
#include<iomanip>
using namespace std;
int main()
{
    long long n;
    cin>>n;
    long long sum=0;
    if(n%2==0)
    {
        sum=(n/2)*(n+1);
    }
    else
    {
        sum=((n+1)/2)*(n);
    }

    cout<<sum<<endl;
    return 0;
}

//Another approach (It is same as above, just handling division of n and (n+1) better)
#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n;
    cin>>n;
    
    if(n%2!=0) cout<<n*((n+1)/2)<<endl;
    else cout<<(n/2)*(n+1)<<endl;
    
    return 0;
}


//Another approach (using loop - It generates TLE)
#include<bits/stdc++.h>
#include<iomanip>
using namespace std;
int main()
{
    int n;
    cin>>n;
    long long sum=0;
    while(n>0)
    {
        sum=sum+n;
        n--;
    }
    cout<<sum<<endl;
    return 0;
}
