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
void solve()
{
	int dem = 0 ;
	ll b , p ;
	cin >> b >> p;
	if( p == 1 )
	{
		cout << "0\n";
		return ;
	}
	if( b <= p )
	{	
		FOR(1,b+1)
		{
			if( (i*i)%p == 1 ) dem++;
		}
		cout << dem << endl;
	}
	else
	{
		vl B ;
		B.push_back(1);
		dem++;
		FOR(2,p)
		{
			ll h = i*i;
			if( h%p == 1 )
			{
				B.push_back(i);
				dem++;
			}
		}
		FOR( 0,sz(B) )
		{
			while( B[i] + p <= b )
			{
				B[i] +=p ;
				dem++ ;
			}
		}
		cout << dem << endl; 
	}
}
int main()
{
	ios_base::sync_with_stdio(false);
//	cin.tie(NULL);
	int n;
	cin >> n;
	while( n-- )
	{
		solve();
	}
	
}
