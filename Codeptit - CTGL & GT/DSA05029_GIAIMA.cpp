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
#define all(x) x.begin(),x.end()
using namespace std;

typedef pair<int,int> pII;
typedef pair<LL,LL> pLL;
const int inf = 1e9;
const LL Linf = (LL) 1e18;
const LL MOD = 1000000007LL;
#define PI 3.141592653589793238;
#define maxn 100005


void solve() {
	string s;
	cin >> s;
	int n = s.size();
	s = ' ' + s;
	int f[100] = {};
	f[0] = 1;
	f[1] = 1;
	if( s[1] == '0' ) cout << 0 << endl;
	else {
		for(int i = 2; i <= n; i++) {
			f[i] = f[i-1];
			if( s[i] == '0') {
				if( s[i-1] != '1' && s[i-1] != '2' ) {
					cout << 0 << endl;
					return;
				}
				f[i] = f[i-2];
			}
			else {
				int num = (int)(s[i-1]-'0')*10 + (int)(s[i]-'0');
				if( num <= 26 && num >= 11) {
					f[i] += f[i-2];
				}
			}
		}
		cout << f[n] << endl;
	}
}		 

int main(){
    ios::sync_with_stdio(false);
#ifndef ONLINE_JUDGE
    freopen("test.in","r",stdin);
    freopen("test.out","w",stdout);
#endif
	int T = 1;
	cin >> T;
	while( T-- )
    	solve();
    return 0;
}