#include<bits/stdc++.h>
using namespace std;

bool cmp(int x,int y)
{
	return x > y ;
}
void solve()
{
	int n , k ;
	cin >> n >> k ;
	vector<int> a(n) ;
	for(int i = 0 ; i < n ; i++ ) cin >> a[i] ;
	sort(a.begin(),a.end(),cmp);
	for(int i = 0 ; i < k ; i++ ) cout << a[i] << ' ' ;
	cout << '\n' ;
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t ;
	cin >> t;
	while( t-- )
	{
		solve() ;
	}
}


