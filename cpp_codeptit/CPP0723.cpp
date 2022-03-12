#include<bits/stdc++.h>
using namespace std;

bool cmp(char a,char b)
{
	return a > b;
}
void solve()
{
	long long n , a;
	cin >> n >> a ;
	string res = "" ;
	while( a > 0 )
	{
		int sodu = a%10 ;
		if( sodu == 2 ) res += "2";
		else if ( sodu == 3 ) res += "3";
		else if ( sodu == 4 ) res += "223";
		else if ( sodu == 5 ) res += "5";
		else if ( sodu == 6 ) res += "35";
		else if ( sodu == 7 ) res += "7" ;
		else if ( sodu == 8 ) res += "7222";
		else if ( sodu == 9 ) res += "3372";
		a/=10;
	}
	sort(res.begin(),res.end(),cmp);
	cout << res << endl; 
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
