#include <iostream>
using namespace std;

int main() 
{
    unsigned long long int n, k, a;
    cin >> n >> k >> a;
    
    if ((n * k) % a != 0) cout << "double";
    else 
    {
        unsigned long long int result = (n * k) / a;
        if (result > 2147483647LL) cout << "long long";
        else cout << "int";
    }

    return 0;
}

//It must be guranteed by the question that the value of n, k, a have to be integer.
//Now, the operation (n*k)/a leaves remainder then it is double else either long long or int.
