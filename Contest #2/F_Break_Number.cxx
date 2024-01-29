#include<iostream>
using namespace std;
int main() 
{
	
	int ntt;
	cin >> ntt;

	long long sum = 0;
    long long Max=0;

	for (int i = 0; i < ntt; i++) 
    {
		long long x;
		cin >> x;

		while(x % 2 == 0)
		{
			x /= 2;
			sum++;	
		}
        
		if (sum > Max) {
			Max = sum;
		}
		sum = 0;
	}
	cout << Max;
 }
