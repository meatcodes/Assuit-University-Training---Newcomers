#include<bits/stdc++.h>
using namespace std;

long long avew(int n, long long *arr)
{
     if(n==1) return arr[0];
     
     return arr[0]+avew(n-1,arr+1);
}

int main()
{
     int n;
     cin>>n;
     
     long long arr[n];
     for(int i=0; i<n; i++) cin>>arr[i];
     
     cout<<avew(n, arr)/n;
     
     return 0;
}

//According to question.
#include<bits/stdc++.h>
using namespace std;

double average(int *arr, int n, double check)
{
	if(n==1) return arr[0];

	double small=average(arr, n-1, check);

	if(n==check) return (small+arr[n-1])/check;
	else return small+arr[n-1];
}

int main()
{
	int n;
	cin>>n;

	int arr[101];
	for(int i=0; i<n; i++) cin>>arr[i];

	cout<<fixed<<setprecision(6)<< average(arr, n, n);

	return 0;
}
