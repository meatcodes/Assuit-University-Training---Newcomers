//This code works fine.
#include<bits/stdc++.h>
using namespace std;

void change(int n)
{
     if(n==0) return;
     
     change(n/2);
     
     cout<<n%2;
}

int main()
{
     int t;
     cin>>t;
     while(t--)
     {
          int n;
          cin>>n;
          
          change(n);
          cout<<"\n";
     }
     
     return 0;
}

//This code has no issue logically but it gives error on large value because of storage values of int, long long data type.
#include <bits/stdc++.h>
using namespace std;
 
long long find(int decimal_number)
{
    if (decimal_number == 0)
        return 0;
    else
        return (decimal_number % 2 + 10 *find(decimal_number / 2));
}
 
int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int decimal_number;
        cin>>decimal_number;
        cout << find(decimal_number)<<"\n";
    }
    
    return 0;
}

//But the same code as above if submitted in python, it's accepted.
def find(decimal_number):
    if decimal_number == 0:
        return 0
    else:
        return decimal_number % 2 + 10 * find(decimal_number // 2)

if __name__ == "__main__":
    t = int(input())

    for _ in range(t):
        decimal_number = int(input())
        print(find(decimal_number))

