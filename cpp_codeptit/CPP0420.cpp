#include<bits/stdc++.h>
using namespace std;

struct Point
{
	long long data_new , data_old , pos ;
};
bool cmp(Point a,Point b)
{
	if( a.data_new < b.data_new ) return true ;
	else if( a.data_new > b.data_new ) return false ;
	else
	{
		if( a.pos < b.pos ) return true ;
		return false ;
	}
}
void solve()
{
	int n ; long long x ;
	cin >> n >> x ;
	vector<Point> v(n) ;
	for(int i = 0 ; i < n ; i++ )
	{
		v[i].pos = i ;
		cin >> v[i].data_old ;
		v[i].data_new = abs(v[i].data_old-x);
	}
	sort(v.begin(),v.end(),cmp);
	for(int i = 0 ; i < n ; i++ )
	{
		cout << v[i].data_old << ' ' ;
	}
	cout << '\n';
}

int main()
{
	ios_base::sync_with_stdio(false);cin.tie(NULL);
	int t;
	cin >> t;
	while( t-- )
	{
		solve();
	}
}


