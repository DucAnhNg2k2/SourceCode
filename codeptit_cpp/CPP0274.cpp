#include<bits/stdc++.h>
using namespace std;

void solve()
{
	int n, dem = 0;
	cin >> n;
	vector<long long> a(n+5) ;
	vector<int> dd(1e6+5,0);
	for(int i = 1 ; i <= n ; i++ )
	{
		cin >> a[i] ;
		dd[a[i]]++;
	}
	for(int i = 1 ; i <= n ; i++ )
	{
		if(( dd[a[i]]) > 1 ) dem++;
	}
	cout << dem << endl;
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
