#include<bits/stdc++.h>
using namespace std;
int main()
{
     int n;
     cin>>n;
     
     int even=0, odd=0, neg=0, pos=0;
     
     for(int i=0; i<n; i++)
     {
          int a;
          cin>>a;
          
          if(a>0) pos++;
          else if(a<0) neg++;
          
          if(a%2==0) even++;
          else odd++;
     }
     
     cout<<"Even: "<<even<<"\n";
     cout<<"Odd: "<<odd<<"\n";
     cout<<"Positive: "<<pos<<"\n";
     cout<<"Negative: "<<neg<<"\n";

     return 0;
}
