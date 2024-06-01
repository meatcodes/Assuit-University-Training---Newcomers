#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    cin >> str;

    string split_1 = "";
    string split_2 = "";
    string merge = "";
    string temp = str;
    string smallest = str;

    for (int i = 0; i < str.size() - 1; i++)
    {
        split_1 = split_1 + str[i];
        temp.erase(0, 1);
        split_2 = temp;
        sort(split_1.begin(), split_1.end());
        sort(split_2.begin(), split_2.end());
        merge = split_1 + split_2;
        smallest = min(smallest, merge);
    }

    cout << smallest <<"\n";

    return 0;
}
