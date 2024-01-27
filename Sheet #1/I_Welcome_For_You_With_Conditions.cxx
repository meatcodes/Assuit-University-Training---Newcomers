#include<bits/stdc++.h>
#include<iomanip>
using namespace std;
int main()
{
    int a,b;
    cin>>a>>b;
    if(a>=b)
    {
        cout<<"Yes"<<endl;
    }
    else
    {
        cout<<"No"<<endl;
    }
    return 0;
}

//Another approach - (Ternary operator - Google it)
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b;
    cin>>a>>b;
    
    cout<<(a>=b?"Yes\n":"No\n");
    
    return 0; 
}
