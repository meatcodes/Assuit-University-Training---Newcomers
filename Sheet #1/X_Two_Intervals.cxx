#include<bits/stdc++.h>
#include<cstring>
using namespace std;
int main()
{
    int a,b,c,d;
    cin>>a>>b>>c>>d;

    if(a==c && b==d) cout<<a<<" "<<b<<endl;
    
    else if(a>c && b>d && a<d)cout<<a<<" "<<d<<endl;
    
    else if(c>a && b<d && c<b) cout<<c<<" "<<b<<endl;
    
    else if(c<a && d==a) cout<<a<<" "<<d<<endl;
    
    else if(a<c && b==c)cout<<b<<" "<<c<<endl;
    
    else if(a>c && b<d) cout<<a<<" "<<b<<endl;
    
    else if(c>a && d<b) cout<<c<<" "<<d<<endl;
    
    else if(a>c && b==d) cout<<a<<" "<<b<<endl;
    
    else if(a==c && d<b) cout<<c<<" "<<d<<endl;
    
    else if(a==c && b<d) cout<<a<<" "<<b<<endl;
    
    else if(c>a && b==d) cout<<c<<" "<<d<<endl;
    
    else cout<<-1<<endl;
    
    return 0;
}


//I did solve using the above approach.
//Later I learned this approach.
#include<bits/stdc++.h>
#include<cstring>
using namespace std;
int main()
{
    int a,b,c,d;
    cin>>a>>b>>c>>d;

    if(c>b || a>d) cout<<-1<<endl;
    else cout<<max(a,c)<<" "<<min(b,d)<<endl;
    
    return 0;
}
