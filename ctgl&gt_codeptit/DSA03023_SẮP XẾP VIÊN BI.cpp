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
#define maxn 100005

void solve() {
	int n,ans =0;
	cin >> n;
	int s[n+5],m[n+5];
	FOR(i,1,n) {
		char x;
		cin >> x;
		if( x == 'X') m[i] = 1;
		else if( x == 'T') m[i] = 2;
		else m[i] = 3;
		s[i] = m[i];
	}
	sort(m+1,m+1+n);
	FOR(i,1,n) {
		if( s[i] != m[i]) {
			FOR(j,i+1,n) {
				if( s[i] == m[j] && s[j]==m[i]) {
					swap(s[i],s[j]);
					ans++;
					break;
				}
			}
		}
	}
	FOR(i,1,n) {
		if( s[i] != m[i]) {
			FOR(j,i+1,n) {
				if(m[i]==s[j] && m[j]!=s[j]) {
					swap(s[i],s[j]);
					ans++;
					break;
				}
			}
			i--;
		}
	}
	cout << ans << endl;
}

int main() {
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
