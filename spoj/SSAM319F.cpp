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
void solve()
{
    int c , m ;
    cin >> c >> m ;
    m++;
    if( c%m == 0 ) cout << "Second";
    else cout << "First";
    cout <<'\n';
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
 
