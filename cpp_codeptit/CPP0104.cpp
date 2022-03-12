#include<bits/stdc++.h>
using namespace std;

long long gt(long long n)
{
	long long k = 1;
	for(int i =1 ; i <= n ;i++ ) k*= i;
	return k;
}
int main()
{
	ios_base::sync_with_stdio(false);cin.tie(NULL);
	int n;
	cin >> n;
	long long sum = 0 ;
	for(int i = 1; i<= n; i++ )
	{
		sum += gt(i) ;
	}
	cout << sum ;
}
