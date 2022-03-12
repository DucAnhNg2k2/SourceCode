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
// https://codeforces.com/contest/1206/problem/B 
typedef pair<int,int>II;
typedef pair<LL,LL>pLL;
typedef vector<int> vi;
typedef vector<LL> vll;
const long double PI = 2*acos(0.0);
const double eps = 1e-6;
const int infi = 1e9;
const LL Linfi = (LL) 1e12;
const LL MOD = 1000000007LL;
#define maxn 10005
 
void solve() {
	int n , pos1 , pos2;
	cin >> n;
	LL a[n+5] , cnt = 0 , f[n+5][2];
	FOR(i,1,n) {
		cin >> a[i];
	}
	sort(a+1,a+1+n);
	vector<pair<LL,LL> > v;
	FOR(i,1,n) {
		f[i][0] = abs(1-a[i]);
		f[i][1] = abs(-1-a[i]);
		cnt += f[i][0];
		if( f[i][0] > f[i][1] ) v.pb(mp(f[i][0],f[i][1]));
	}
	if( v.size()&1 ) {
		FOR(i,1,n) {
			if( f[i][0] <= f[i][1] ) {
				v.pb(mp(f[i][0],f[i][1]));
				break;
			}
		}
	}
	for(int i = 0 ; i < v.size() ; i += 2 ) {
		if( i+1 >= v.size() ) 
			break;
		cnt = min(cnt,cnt+v[i].se+v[i+1].se-v[i].fi-v[i+1].fi);
	}
	cout << cnt << endl;
}
 
int main(){
    ios::sync_with_stdio(false);
#ifndef ONLINE_JUDGE
    freopen("test.in","r",stdin);
    freopen("test.out","w",stdout);
#endif
	int T = 1;
//	cin >> T;
	while( T-- )
    	solve();
    return 0;
}
