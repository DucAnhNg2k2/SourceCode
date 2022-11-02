#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	vector<long long> fibo(95);
	fibo[0] = 0 ; fibo[1] = 1 ;
	for(int i = 2 ; i <= 92 ; i++ )
	{
		fibo[i] = (fibo[i-1]+fibo[i-2]);
	}
 	int t;
	cin >> t;
	while( t-- )
	{
		long long x ;
		cin >> x;
		bool ok = false ;
		for(int i = 0 ; i <= 92 ; i++ )
		{
			if( x == fibo[i] ) ok = true ;
		}
		if( ok ) cout << "YES" << '\n' ;
		else cout << "NO" << '\n' ;
	}
}      

