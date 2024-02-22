//It's Accepted and well implemented.
#include<bits/stdc++.h>
using namespace std;

bool V_check(char st)
{
     st=(char) tolower(st);
     if(st=='a' || st=='e' || st=='i' || st=='o' || st=='u') return true;
     else return false;
}

int Vowels(string s, int index)
{
     if(index==s.size()) return 0;
     
     return V_check(s[index])+Vowels(s, index+1);
}

int main()
{
     string s;
     getline(cin,s);
     
     cout<<Vowels(s, 0);
     
     return 0;
}

//Naive approach (taking help of global variable)
#include<bits/stdc++.h>
using namespace std;

int count1=0;

int vowel(string s, int n)
{
    if(n==0) return count1;

    if(s[n-1]=='a' || s[n-1]=='e' || s[n-1]=='i' || s[n-1]=='o' || s[n-1]=='u' || s[n-1]=='A' || s[n-1]=='E' || s[n-1]=='I' || s[n-1]=='O' || s[n-1]=='U') count1++;

    int small=vowel(s, n-1);
    
    return count1;
}

int main()
{
    string s;
    getline(cin, s);

    cout<<vowel(s, s.size());

    return 0;
}

//Naive approach (without global variable)
#include<bits/stdc++.h>
using namespace std;

int vowel(string s, int i, int n)
{
    if(i==n) return 0;

    int small=vowel(s, i+1, n);

    if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u' || s[i]=='A' || s[i]=='E' || s[i]=='I' || s[i]=='O' || s[i]=='U') 
    {
        return small+1;
    }
    else return small;
}

int main()
{
    string s;
    getline(cin, s);

    int n=s.size();

    cout<<vowel(s, 0, n);

    return 0;
}
