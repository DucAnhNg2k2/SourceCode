#include<bits/stdc++.h>
using namespace std;

void solve()
{
	int n , check = false;
	cin >> n;
	vector<long long> a(n) ;
	for(int i = 0 ; i < n ; i++ )
	{
		cin >> a[i] ;
		if( a[i] >= 0 ) check = true ;
	}
	if( check == false )
	{
		long long max = -1e10 ;
		for(int i = 0 ; i < n ; i++ )
		{
			if( max < a[i] ) max = a[i] ;
		}
		cout << max << '\n' ;
	}
	else
	{
		long long sum = 0 , max = 0 ;
		for(int i = 0 ; i < n ; i++ )
		{
			if( max < sum ) max = sum ;
			sum += a[i] ;
			if( sum < 0 ) sum = 0 ;
		}
		if( max < sum ) max = sum ;
		cout << max << '\n' ;
	}
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t;
	cin >> t;
	while( t-- )
	{
		solve();
	}
}


