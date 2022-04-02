#include<bits/stdc++.h>
using namespace std;
const long long mod = 1e9+7;
long long f[1000000] = {0};
long long fibo(int n)
{
	if( n == 0 ) return 0;
	if( n == 1 ) return 1;
	if( f[n] == 0 )
	{
		f[n] = (fibo(n-1)%mod + fibo(n-2)%mod)%mod;;
		return f[n];
	}
	else
	{
		return f[n];
	}
}
int main()
{
	int n ;
	cin >> n;
	cout << fibo(n) ;
} 
