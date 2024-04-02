#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    getline(cin, s);

    for(int i=0,j=0; i<s.size(); i++)
    {
        if(s[i]==' ')
        {
            int a=i-1;
            while(j<a)
            {
                swap(s[a],s[j]);
                a--;
                j++;
            }
            j=i+1;
        }
        else if(i==s.size()-1)
        {
            int a=i;
            while(j<a)
            {
                swap(s[a],s[j]);
                a--;
                j++;
            }
            j=j+1;
        }
    }

    cout<<s;

    return 0;
}

//Here, it is taking a single string and printing it after reversing the word unless we reach the file end.
#include<bits/stdc++.h>
using namespace std;
int main() 
{
	string s;
	int f=0;
	while(cin>>s)
    {
        reverse(s.begin(),s.end());

        if(f) cout<<" ";
        f=1;
        cout<<s;
    }
    return 0;
}


