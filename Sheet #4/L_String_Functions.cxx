#include<bits/stdc++.h>
using namespace std;
int main()
{
     int n,q;
     cin>>n>>q;
     
     string s;
     cin>>s;
     
     while(q--)
     {
          string str;
          cin>>str;
          if(str=="pop_back") s.pop_back();
          else if(str=="front") cout<<s.front()<<"\n";
          else if(str=="back") cout<<s.back()<<"\n";
          else if(str=="sort") 
          {
               int l,r;
               cin>>l>>r;

               if(l>r) swap(l,r);

               sort(s.begin()+(l-1), s.begin()+r);
          }
          else if(str=="reverse")
          {
               int l,r;
               cin>>l>>r;

               if(l>r) swap(l,r);

               reverse(s.begin()+(l-1), s.begin()+r);
          }
          else if(str=="print")
          {
               int a;
               cin>>a;
               cout<<s[a-1]<<"\n";
          }
          else if(str=="substr")
          {
               int l,r;
               cin>>l>>r;

               if(l>r) swap(l,r);
               
               cout<<s.substr(l-1, r-(l-1))<<"\n";
          }
          else if(str=="push_back")
          {
               char c;
               cin>>c;
               s.push_back(c);
          }
     }
     
     
     return 0;
}
