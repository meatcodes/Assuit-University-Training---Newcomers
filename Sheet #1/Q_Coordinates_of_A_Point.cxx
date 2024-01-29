#include<bits/stdc++.h>
#include<cstring>
using namespace std;
int main()
{
    double x,y;
    cin>>x>>y;
    if(x==0 && y==0)
    {
        cout<<"Origem"<<endl;
    }
    else if(x==0 && (y>0 || y<0 ))
    {
        cout<<"Eixo Y"<<endl;
    }
    else if(y==0 && (x>0 || x<0))
    {
        cout<<"Eixo X"<<endl;
    }
    else if(x>0 && y>0)
    {
        cout<<"Q1"<<endl;
    }
    else if(x<0 && y>0)
    {
        cout<<"Q2"<<endl;
    }
    else if(x<0 && y<0)
    {
        cout<<"Q3"<<endl;
    }
    else if(x>0 && y<0)
    {
        cout<<"Q4"<<endl;
    }
    return 0;
}

//Just simplified version of above.
#include<bits/stdc++.h>
using namespace std;
int main()
{
    float x,y;
    cin>>x>>y;

    if (x==0 && y==0 )
    {
        cout<<"Origem"<<endl;
    }
    else if(y==0) cout<<"Eixo X";
    else if(x==0) cout<<"Eixo Y";
    else if(x>0 )
    {
        if(y>0)cout<<"Q1";
        else cout<<"Q4";
    }
    else if(x<0)
    {
        if(y>0)cout<<"Q2";
        else cout<<"Q3";
    }

    return 0;
}
