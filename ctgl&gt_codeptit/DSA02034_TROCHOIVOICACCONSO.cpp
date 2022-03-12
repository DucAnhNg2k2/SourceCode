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

int n;
bool vs[100] = {};
void Try(int i,int data,string s) {
	if( i > n ) {
		cout << s << endl;
		return;
	}
	if( s.empty() ) {
		FOR(j,1,n) {
			vs[j] = true;
			s = to_string(j);
			Try(i+1,j,s);
			vs[j] = false;
		}
	}
	else {
		FOR(j,1,n) {
			if( j == data-1 || j == data+1 || vs[j] ) continue;
			vs[j] = true;
			Try(i+1,j,s+to_string(j));
			vs[j] = false;
		}
	}
}

void solve() {
	cin >> n;
	Try(1,0,"");
}

int main() {
    ios::sync_with_stdio(false);
#ifndef ONLINE_JUDGE
//    freopen("test.in","r",stdin);
//    freopen("test.out","w",stdout);
#endif
	int T = 1;
	cin >> T;
	while( T-- )
    	solve();
    return 0;
}
