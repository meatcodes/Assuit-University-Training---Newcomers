//with help of passing extra variable as index.
include<bits/stdc++.h>
using namespace std;

bool check(int index, int n, int *arr)
{
     if(index>=n) return true;
     
     if(arr[index]!=arr[n]) return false;
     
     return check(index+1, n-1, arr);
}

int main()
{
     int n;
     cin>>n;
     
     int arr[n];
     for(int i=0; i<n; i++) cin>>arr[i];
     
     if(check(0, n-1, arr)) cout<<"YES\n";
     else cout<<"NO\n";
     
     return 0;
}

//without extra variable.
#include<bits/stdc++.h>
using namespace std;

bool palin(int *arr, int n)
{
	if(n==1) return true;
	else if(n==2)
	{
		if(arr[0]==arr[1]) return true;
		else return false;
	}

	if(arr[0]!=arr[n-1]) return false;

	bool small=palin(arr+1, n-2);

	return small;
}

int main()
{
	int n;
	cin>>n;

	int arr[100001];
	for(int i=0; i<n; i++) cin>>arr[i];

	if(palin(arr, n)) cout<<"YES";
	else cout<<"NO";

	return 0;
}
