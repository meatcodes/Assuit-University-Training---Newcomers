#include<bits/stdc++.h>
using namespace std;

int ways(int start, int end, int count)
{
    if(start==end) 
    {
        count++;
        return count;
    }
    if(start>end) return 0;

    int route_1=ways(start+1, end, count);
    int route_2=ways(start+2, end, count);
    int route_3=ways(start+3, end, count);

    return route_1+route_2+route_3;
}

int main()
{
    int start, end;
    cin>>start>>end;

    cout<<ways(start, end , 0);

    return 0;
}
