#include<bits/stdc++.h>
#include<cstring>
using namespace std;
int main()
{
    char x;
    cin>>x;
    int a=x;
    if(a>=97 && a<=122){
        cout<<char(a-32)<<endl;
    }
    else if(a>=65 && a<=90){
        cout<<char(a+32)<<endl;
    }
    return 0;
}
