#include<bits/stdc++.h>
using namespace std;
int main()
{
     int n;
     cin>>n;
     
     int s=2*n;
     
     for(int i=0; i<s; i++)
     {
          if(i<n)
          {
               for(int j=-(n-1); j<=i; j++)
               {
                    if(j>=-i && j<=i) cout<<"*";
                    else cout<<" ";
               }
          }
          else
          {
               for(int j=-(n-1); j<s-i; j++)
               {
                    if(j>-(s-i) && j<(s-i)) cout<<"*";
                    else cout<<" ";
               }
          }
          cout<<"\n";
     }
     
     
     return 0;
}

//This is not the majority code for patterns, so don't worry if you don't get it at first.
//I just have used basic coordinate geometry, instead of writing loop for space and star seprately.
//    -3  -2  -1  0  1  2  3
// 0              *
// 1           *  *  *
// 2       *   *  *  *  *  
// 3   *   *   *  *  *  *  *
// 4   *   *   *  *  *  *  *   j=-3  j<4  s=8  n=4
// 5       *   *  *  *  *      j=-3  j<3
// 6           *  *  *         j=-3  j<2
// 7              *            j=-3  j<1
