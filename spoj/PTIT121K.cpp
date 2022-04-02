#include<bits/stdc++.h>
using namespace std;
 
typedef unsigned long long ull;
typedef long long ll;
typedef double db;
 
#define FOR(a,b) for(ll i = a ; i < b ; i++ )
#define FORR(i,a,b) for(ll i = a ; i < b ; i++ )
#define sz(x) (x).size()
 
typedef vector<ll> vl;
const ll mod = 1e9+7;
int main()
{
	ios_base::sync_with_stdio(false);
//	cin.tie(NULL);
	int n;
	cin >> n;
	vector< vector<string> > s( n+1,vector<string>(n+1) );
	FORR(i,0,n+1)
	{
		FORR(j,0,n+1)
		{
			s[i][j] = "";
		}
	}
	FORR(i,1,n+1)
	{
		FORR(j,1,n+1)
		{
			cin >> s[i][j] ;
		}
	}
	// start s[1][1] ;
	vector< vector<string> > F( n+1,vector<string>(n+1) ) ;
	FORR(i,1,n+1)
	{
		FORR(j,1,n+1)
		{
			F[i][j] = max(F[i-1][j],F[i][j-1]) + s[i][j] ;
		}
	}
	string res = F[n][n] ;
	while( sz(res)%4 != 0 )
	{
		res = '0' + res ;
	}
	int dem = 0 ;
	FOR(0,sz(res))
	{
		if( res[i] =='0') dem++;
	}
	if( dem == sz(res) ) 
	{
		cout << 0 ;
		return 0 ;
	}
	while( res[0] =='0' && res[1] =='0' && res[2] =='0' && res[3] =='0')
	{
		res.erase(0,1);
		res.erase(0,1);
		res.erase(0,1);
		res.erase(0,1);
	}
	for(int i = 0 ; i < sz(res) ; i+= 4)
	{
		string r = "";
		r += res[i];
		r += res[i+1];
		r += res[i+2];
		r += res[i+3];
		if( r == "0000") cout << 0;
		if( r == "0001") cout << 1;
		if( r == "0010") cout << 2;
		if( r == "0011") cout << 3;
		if( r == "0100") cout << 4;
		if( r == "0101") cout << 5;
		if( r == "0110") cout << 6;
		if( r == "0111") cout << 7;            	
		if( r == "1000") cout << 8;
		if( r == "1001") cout << 9;
		if( r == "1010") cout << "A";
		if( r == "1011") cout << "B";
		if( r == "1100") cout << "C";
		if( r == "1101") cout << "D";
		if( r == "1110") cout << "E";
		if( r == "1111") cout << "F";
	}
}
 
