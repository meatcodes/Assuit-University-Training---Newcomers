#include<bits/stdc++.h>
using namespace std;
int main()
{
     int n;
     cin>>n;

     int arr[26]={0};
     
     for(int i=0; i<n; i++)
     {
        char c;
        cin>>c;

        int a=c-'a';

        arr[a]++;
     }

     for(int i=0; i<26; i++)
     {
        while(arr[i]--)
        {
            cout<<(char)(i+97);
        }
     }
     return 0;
}
