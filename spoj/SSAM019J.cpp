// code C++
#include<bits/stdc++.h>
using namespace std;
 
typedef unsigned long long ull;
typedef long long ll;
typedef double db;
 
#define FOR(a,b) for(ll i = a ; i < b ; i++ )
#define FORR(i,a,b) for(ll i = a ; i < b ; i++ )
#define sz(x) (x).size()
 
typedef vector<ll> vl;
const ll mod = 1e9 + 7;
ll lcm(ll a,ll b)
{
    return a*b/__gcd(a,b);
}
void solve()
{
    int n;
    cin >> n;
    ll a[n] ;
    FOR(0,n) cin >> a[i];
    ll b[n+1] ;
    b[0] = a[0] ;
    FOR(1,n)
    {
        b[i] = lcm(a[i],b[i-1]);
        ll tmp = a[i-1] ;
        while( tmp <= b[i] )
        {
        	if( tmp%a[i] == 0 )
        	{
        		b[i] = tmp;
        		break;
			}
			else 
			{
				tmp += a[i-1];
			}
		}
    }
    b[n] = a[n-1] ;
    FOR(0,n+1)
    {
        cout << b[i] << ' ';
    }
    cout << endl;
}
int main()
{   ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int t;
    cin >> t;
    while ( t-- )
    {
        solve();   
    }
}
/*
	5
1 7 4 2 1
1 7 28 28 28 1	
*/ 
