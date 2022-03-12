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

LL to_int(string s) {
	LL res = 0;
	for(char i : s ) {
		res = res*10 + (int)(i-'0');
	} 
	return res;
}

int Min = inf , ans;
string n;

void Try(int pos,string s,int cnt) {
	if( pos == s.size() ) {
		if( to_int(s) % 7 == 0 && Min > cnt ) {
			Min = cnt;
			ans = to_int(s);
		}
		return;
	}
	
	FOR(i,0,9) {
		if( pos == 0 && i == 0) continue;
		if( s[pos] != char(i+'0') ) {
			s[pos] = char(i+'0');
			Try(pos+1,s,cnt+1); 
			s[pos] = n[pos];
		}
		else {
			Try(pos+1,s,cnt);
		}
	}	
}

void solve() {
	Min = inf;
	cin >> n;
	Try(0,n,0);
	cout << ans << endl;
}

int main() {
	ios_base::sync_with_stdio(false);
	int T = 1;
	cin >> T; 
	while( T-- ) {
		solve();
	}
}

