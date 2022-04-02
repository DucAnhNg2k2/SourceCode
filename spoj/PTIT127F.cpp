#include<iostream>
using namespace std;
int main ()
{
	long long n;
	cin >> n;
	long long arr[300005];
	for (long i=1; i<=n; i++)
	{
		cin>>arr[i];
	}
	long long dem=0;
	long long x=n;
	for (int i=n; i>=1; i--)
	{
		if (arr[i]==x)
		{
			x--;
		}
		else dem++;
	}
	cout << dem;
	return 0;
}  
