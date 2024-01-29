#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == 0)
            {
                if (j == 0) cout << "\\";
                else if (j == n - 1) cout << "/";
                else cout << "*";
            }
            
            else if (i == n - 1)
            {
                if (j == 0) cout << "/";
                else if (j == n - 1) cout << "\\";
                else cout << "*";
            }
            
            else if (i == n / 2)
            {
                if (j == n / 2) cout << "X";
                else cout << "*";
            }

            else
            {
                if (i < n / 2)
                {
                    if (i == j) cout << "\\";
                    else if (j == n - i-1) cout << "/";
                    else cout << "*";
                }
                else
                {
                    if (j == n-i-1) cout << "/";
                    else if (j == i) cout << "\\";
                    else cout << "*";
                }
            }
        }
        cout << "\n";
    }

    return 0;
}
