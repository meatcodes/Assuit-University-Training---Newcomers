#include<bits/stdc++.h>
using namespace std;

int knapsack(int n, int w, int *weight, int *value)
{
    if(w==0 || n==0) return 0;

    if(weight[n-1]>w) return knapsack(n-1, w, weight, value);

    int take=value[n-1]+knapsack(n-1, w-weight[n-1], weight, value);
    int not_take=knapsack(n-1, w, weight, value);

    return max(take, not_take);
}

int main()
{
    int n,w;
    cin>>n>>w;

    int weight[n];
    int value[n];
    for(int i=0; i<n; i++) 
    {
        cin>>weight[i];
        cin>>value[i];
    }


    cout<<knapsack(n, w, weight, value);

    return 0;
}
