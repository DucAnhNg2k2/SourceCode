#include<bits/stdc++.h>
using namespace std;

void solve()
{
	int dd[3] = {0};
	int n ,a ;
	cin >> n ;
	while( n-- )
	{
		cin >> a;
		dd[a]++;
	}
	for(int i = 0 ; i <= 2 ; i++ )
	{
		while( dd[i] > 0 )
		{
			 cout << i << ' ';
			 dd[i]--;
		}
	}
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


