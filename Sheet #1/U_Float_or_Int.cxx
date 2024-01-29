#include<bits/stdc++.h>
#include<cstring>
using namespace std;
int main()
{
    double a;
    cin>>a;

    int b=a;
    if(a-b==0)
    {
        cout<<"int"<<" "<<b<<endl;
    }
    else
    {
        cout<<"float"<<" "<<b<<" "<<a-b<<endl;
    }
    
    return 0;
}

//Just a simple manipulation
#include<bits/stdc++.h>
using namespace std;
int main()
{
    float b;
    cin>>b;
       
    if(b-int(b)==0) cout<<"int "<<int(b)<<"\n";
    if(b-int(b)>0) cout<<"float "<<int(b)<<" "<<fixed<<setprecision(3)<<b-int(b)<<"\n";

    return 0;
}

//Just another manipulation
#include<bits/stdc++.h>
using namespace std;
int main()
{
    float b;
    cin>>b;
       
    if(b-int(b)==0) cout<<"int "<<int(b)<<"\n";
    if(b-int(b)>0) cout<<"float "<<int(b)<<" "<<b-int(b)<<"\n";

    return 0;
}

