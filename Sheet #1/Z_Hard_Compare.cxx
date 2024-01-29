#include<bits/stdc++.h>
using namespace std;
int main()
{
    double a,b,c,d;
    cin>>a>>b>>c>>d;

    double s=b*log(a);
    double q=d*log(c);

    if(s>q)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
    
    return 0;
}

//Improved logic.
#include<bits/stdc++.h>
using namespace std;
int main()
{
    double a,b,c,d;
    cin>>a>>b>>c>>d;

    double s=b*log(a);
    double g=d*log(c);

    cout<<(s>g?"YES":"NO");

    return 0;
}
