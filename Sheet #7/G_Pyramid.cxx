#include<bits/stdc++.h>
using namespace std;

void print(int n, int row, int col, int spa)
{
     if(row==n) return;
     
     else 
     {
          if(spa<n-row-1)
          {
               cout<<" ";
               print(n, row, col, spa+1);
          }
          else if(col<2*row+1)
          {
               cout<<"*";
               print(n, row, col+1, spa);
          }
          else 
          {
               cout<<"\n";
               print(n, row+1, 0, 0);
          }
     }
}

int main()
{
     int n;
     cin>>n;
     
     print(n,0,0,0);
     
     return 0;
}
