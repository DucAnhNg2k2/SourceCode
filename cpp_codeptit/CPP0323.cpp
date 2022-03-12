#include<bits/stdc++.h>
using namespace std;

void solve()
{
	string s ; long long m ;
	cin >> s >> m ;
	long long sum = 0 ;
	for(int i = 0 ; i < s.size() ; i++ )
	{
		sum = sum*10 + (int)(s[i]-'0');
		sum %= m ;	
	}	
	cout << (sum%m) << endl;
}

int main()
{
	ios_base::sync_with_stdio(false);cin.tie(NULL);
	int t;
	cin >> t ;
	while( t-- )
	{
		solve() ;
	}
}
