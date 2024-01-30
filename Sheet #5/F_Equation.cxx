#include <bits/stdc++.h>
using namespace std;

void equation(int x, int n)
{
    double sum = 0;

    for (int i = 2; i <= n; i += 2)
    {

        sum = sum + pow(x, i);
    }

    cout << (long long) sum;
}

int main()
{
    int x, n;
    cin >> x >> n;

    equation(x, n);

    return 0;
}
