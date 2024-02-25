#include<bits/stdc++.h>
using namespace std;
int main()
{
     int a,b;
     cin>>a>>b;
     
     int count=0;
     for(int i=a; i<=b; i++)
     {
          int s=i;
          bool flag=true;
          while(s>0)
          {
               if(s%10!=4 && s%10!=7) 
               {
                    flag=false;
                    break;
               }
               s=s/10;
          }
          
          if(flag) 
          {
               cout<<i<<" ";
               count++;
          }
     }
     
     if(count==0) cout<<-1<<"\n";
     
     return 0;
}
