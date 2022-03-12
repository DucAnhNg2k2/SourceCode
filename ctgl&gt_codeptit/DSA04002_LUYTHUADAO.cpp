#include <bits/stdc++.h>
#define LL long long 
#define ULL unsigned long long
#define FOR(i,a,b) for(int i=a;i<=b;++i)
#define FO(i,a,b) for(int i=a;i<b;++i)
#define FORD(i,a,b) for(int i=a;i>=b;--i)
#define fi first
#define se second
#define pb push_back
#define mp make_pair
#define endl '\n'
#define debug cout << "YES" << endl
using namespace std;

typedef pair<int,int> pII;
typedef pair<LL,LL> pLL;
const int inf = 1e9;
const LL Linf = (LL) 1e18;
const LL MOD = 1000000007LL;
#define maxn 100005

long long Power(LL n,long long k)
{
	if( k == 0 ) return 1;
	if( k == 1 ) return n%MOD;
	else
	{
		long long temp = Power(n,k/2)%MOD;
		if( k%2 == 0 ) return (temp*temp)%MOD;
		else return ((temp*temp)%MOD*(n)%MOD)%MOD;
	}
}

void solve() {
	LL n;
	cin >> n;
	LL tmp = n , R = 0;
	while( tmp > 0 ) {
		R = R*10 + tmp%10;
		tmp /= 10;
	}
	cout << Power(n,R) << endl;
}

int main() {
    ios::sync_with_stdio(false);
#ifndef ONLINE_JUDGE
    freopen("test.in","r",stdin);
//    freopen("test.out","w",stdout);
#endif
	int T = 1;
	cin >> T;
	while( T-- )
    	solve();
    return 0;
}
