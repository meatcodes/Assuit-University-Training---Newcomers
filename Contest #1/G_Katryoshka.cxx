#include<bits/stdc++.h>
using namespace std;
int main()
{
     long long eyes, mouths, bodies;
     cin>>eyes>>mouths>>bodies;
     
     long long val=0;
     
     val=val+min(min(eyes,mouths), bodies);
     
     eyes=eyes-val;

     mouths=mouths-val;

     bodies=bodies-val;
     
     val=val+min((eyes/2), bodies);
     
     cout<<val;
     
     return 0;
}
