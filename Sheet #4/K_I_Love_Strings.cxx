#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        string s, t;
        cin >> s >> t;

        string temp = "";
        if (s.size() <= t.size())
        {
            for (int i = 0; i < s.size(); i++)
            {
                temp = temp + s[i];
                temp = temp + t[i];
            }

            for (int i = s.size(); i < t.size(); i++)
            {
                temp = temp + t[i];
            }
        }
        else 
        {
            for (int i = 0; i < t.size(); i++)
            {
                temp = temp + s[i];
                temp = temp + t[i];
            }

            for (int i = t.size(); i < s.size(); i++)
            {
                temp = temp + s[i];
            }
        }

        cout << temp << "\n";
    }

    return 0;
}
