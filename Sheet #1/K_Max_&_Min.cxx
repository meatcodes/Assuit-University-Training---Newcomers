#include<bits/stdc++.h>
#include<iomanip>
using namespace std;
int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    if(a>=b && b>=c)
    {
        cout<<c<<" "<<a<<endl;
    }
    else if(a>=c && c>=b)
    {
        cout<<b<<" "<<a<<endl;
    }
    else if(b>=a && a>=c)
    {
        cout<<c<<" "<<b<<endl;
    }
    else if(b>=c && c>=a)
    {
        cout<<a<<" "<<b<<endl;
    }
    else if(c>=a  && a>=b)
    {
        cout<<b<<" "<<c<<endl;
    }
    else if(c>=b && b>=a)
    {
        cout<<a<<" "<<c<<endl;
    }
    return 0;
}

//Simple and efficient code using inbuilt max and min function.
//Google max() and min() function in c++.
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    
    cout<<min(min(b,c),a)<<" "<<max(max(b,c),a);
    
    return 0;
}
  
