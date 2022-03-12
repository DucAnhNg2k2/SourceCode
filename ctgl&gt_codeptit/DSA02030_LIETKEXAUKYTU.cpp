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

char c;int k;
set<string> ans;
void Try(int i,string s,char top) {
	if( i > k ) {
		sort(s.begin(),s.end());
		ans.insert(s);
		return;
	}
	for(char j = top ; j <= c ; j++ ) {
		Try(i+1,s+j,j);
	}	
}

void solve() {
	ans.clear();
	cin >> c >> k;
	Try(1,"",'A');
	for(auto i : ans ) cout << i << endl;
}

int main() {
    ios::sync_with_stdio(false);
#ifndef ONLINE_JUDGE
    freopen("test.in","r",stdin);
//    freopen("test.out","w",stdout);
#endif
	int T = 1;
//	cin >> T;
	while( T-- )
    	solve();
    return 0;
}

