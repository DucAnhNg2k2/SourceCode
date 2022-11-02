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
#define PI 3.141592653589793238;
#define maxn 100005


void solve() {
	string s;
	cin >> s;
	bool check = true;
	FOR(i,0,s.size()-1) {
		if( s[i] == '1' ) check = false;
	}
	if( check ) {
		FOR(i,0,s.size()-1) {
			cout << '1';
		}
		cout << endl;
		return;
	}
	FORD(i,s.size()-1,0) {
		if( s[i] == '1' ) {
			s[i] = '0';
			FOR(j,i+1,s.size()-1) {
				s[j] = '1';
			}
			break;
		}
	}
	cout << s << endl;
}

int main(){
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
