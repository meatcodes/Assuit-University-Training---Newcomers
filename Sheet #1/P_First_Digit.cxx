#include<bits/stdc++.h>
//Here we are doing a=x/1000 because we noticed the constraint.
#include<cstring>
using namespace std;
int main()
{
    int x;
    cin>>x;
    int a=(x/1000);
    if(a%2==0){
        cout<<"EVEN"<<endl;
    }
    else{
        cout<<"ODD"<<endl;
    }
    return 0;
}

//This is accepted for small testcase but longer testcase might give TLE
#include<bits/stdc++.h>
#include<cstring>
using namespace std;
int main()
{
    int k;
    cin>>k;

    int x=k;
    int digit_count=0;
    while(x>0)
    {
        digit_count++;
        x=x/10;
    }
    
    int a=1;
    while(digit_count>0)
    {
        a=a*10;
        digit_count--;
    }
    

    int c=a/10;
    
    int b=(k/c);
    
    if(b%2==0)
    {
        cout<<"EVEN"<<endl;
    }
    else
    {
        cout<<"ODD"<<endl;
    }
    return 0;
}

