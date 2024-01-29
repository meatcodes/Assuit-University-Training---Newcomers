#include<bits/stdc++.h>
#include<cstring>
using namespace std;
int main()
{
    double a,b,c;
    cin>>a>>b>>c;

    if(a>=b && b>=c)
    {
        cout<<c<<endl;
        cout<<b<<endl;
        cout<<a<<endl;
        cout<<endl;
        cout<<a<<endl;
        cout<<b<<endl;
        cout<<c<<endl;
    }
    else if(a>=c && c>=b)
    {
        cout<<b<<endl;
        cout<<c<<endl;
        cout<<a<<endl;
        cout<<endl;
        cout<<a<<endl;
        cout<<b<<endl;
        cout<<c<<endl;
    }
    else if(b>=a && a>=c)
    {
        cout<<c<<endl;
        cout<<a<<endl;
        cout<<b<<endl;
        cout<<endl;
        cout<<a<<endl;
        cout<<b<<endl;
        cout<<c<<endl;
    }
    else if(b>=c && c>=a)
    {
        cout<<a<<endl;
        cout<<c<<endl;
        cout<<b<<endl;
        cout<<endl;
        cout<<a<<endl;
        cout<<b<<endl;
        cout<<c<<endl;
    }
    else if(c>=a && a>=b)
    {
        cout<<b<<endl;
        cout<<a<<endl;
        cout<<c<<endl;
        cout<<endl;
        cout<<a<<endl;
        cout<<b<<endl;
        cout<<c<<endl;
    }
    else if(c>=b && b>=a)
    {
        cout<<a<<endl;
        cout<<b<<endl;
        cout<<c<<endl;
        cout<<endl;
        cout<<a<<endl;
        cout<<b<<endl;
        cout<<c<<endl;
    }
    return 0;
}

//Just using min and max function here.
//I still would suggest, it's your begining so do it the above way.
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b, c;
    cin >> a >> b >> c;

    cout << min(a, min(b, c)) << "\n";
    cout << (a + b + c) - ( min(a, min(b, c)) + max(a, max(b, c)) ) << "\n";
    cout << max(a, max(b, c)) << "\n";
    cout << "\n";
    cout << a << "\n";
    cout << b << "\n";
    cout << c << "\n";

    return 0;
}
