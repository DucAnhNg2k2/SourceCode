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
int n,dem = 0;

vector<string> ans;
void Try(vector<int> v,int sum,int max) {
	if( sum == n ) {
		string s = "(";
		FOR(i,0,v.size()-1) {
			s += to_string(v[i]);
			s += ' ';
		}
		s.pop_back();
		s += ')';
		ans.pb(s);
		return;
	}
	for(int i = max ; i >= 1 ; i-- ) {
		if( sum + i <= n ) {
			v.pb(i);
			Try(v,sum+i,i);
			v.pop_back();
		}
	}
}

void solve() {
	ans.clear();
	dem = 0;
	cin >> n;
	vector<int> v;
	Try(v,0,n);
	cout << ans.size() << endl;
	for(auto i : ans ) {
		cout << i << ' ';
	}
	cout << endl;
}

int main(){
    ios::sync_with_stdio(false);
#ifndef ONLINE_JUDGE
    freopen("test.in","r",stdin);
//    freopen("test.out","w",stdout);
#endif
	int T = 1;
	cin >> T;
	while( T-- ) {
    	solve();
	}
    return 0;
}

