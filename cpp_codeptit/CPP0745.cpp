#include<bits/stdc++.h>
using namespace std;

const long long mod = 1e9+7;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	vector<long long> fibo(1005);
	fibo[0] = 0 , fibo[1] = 1 ;
	for(int i = 2 ; i <= 1000 ; i++ )
	{
		fibo[i] = (fibo[i-1]%mod +fibo[i-2]%mod)%mod;
	}
 	int t;
	cin >> t;
	while( t-- )
	{
		int n;
		cin >> n;
		cout << fibo[n] << endl ;
	}
}      

