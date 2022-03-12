#include<bits/stdc++.h>
using namespace std;

void solve()
{
	int n , min = INT_MAX , max = INT_MIN;
	cin >> n;
	vector<int> a(n) ;
	vector<int> dd(1e5) ;
	for(int i = 0 ; i < n ; i++ )
	{
		cin >> a[i] ;
		if( max < a[i] ) max = a[i] ;
		if( min > a[i] ) min = a[i] ;
		dd[a[i]]++;
	}
	int dem = 0 ;
	for(int i = min ; i <= max ; i++ ) if( dd[i] == 0 ) dem++;
	cout << dem << '\n' ;
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



