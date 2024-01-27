#include<bits/stdc++.h>
#include<iomanip>
using namespace std;
int main()
{
    int a,b;
    cin>>a>>b;
    if(a>=b && a%b==0)
    {
        cout<<"Multiples"<<endl;
    }
    else if(a<=b && b%a==0)
    {
        cout<<"Multiples"<<endl;
    } 
    else{
        cout<<"No Multiples"<<endl;
    }
    return 0;
}

//It's just the same code, when you do practice enough, you also will start writing good codes.
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b;
    cin>>a>>b;
    
    cout<<(a%b==0 || b%a==0?"Multiples":"No Multiples");
    
    return 0;
}
