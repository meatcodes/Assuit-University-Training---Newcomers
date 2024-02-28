//This logic will generate TLE.
#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int k,s;
    cin>>k>>s; 

    int x=0;
    
    int count=0;
    while(x<=k)
    {
        int y=0;
        while(y<=k)
        {
            int z=0;
            while(z<=k)
            {
                if(x+y+z==s)
                {
                    count++;
                }  
                z++;
            }
            y++;
        }
        x++;
    }

    cout<<count<<'\n';
    
    return 0;
}

//This is optimized and accepted.
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int k,s;
    cin>>k>>s;

    int count=0;

    for(int i=0; i<=k; i++)
    {
        for(int j=0; j<=k; j++)
        {
            if(s-i-j>=0 && s-i-j<=k) count++;
        }
    }

    cout<<count<<endl;

    return 0;
    
}
