#include<bits/stdc++.h>
using namespace std;

void solve()
{
	long long a , n;
	cin >> n;
	set<long long> s;
	for(int i = 1 ; i<= n ;i++ )
	{
		cin >> a;
		s.insert(a);
	}
	for(set<long long>::iterator i = s.begin() ; i != s.end() ; i++ ) cout << *i << ' ';
}
int main()
{  
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t = 1;
	while( t-- )
	{
		solve();
	}
}
