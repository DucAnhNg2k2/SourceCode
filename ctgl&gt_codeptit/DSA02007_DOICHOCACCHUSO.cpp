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

string s;int k;
LL ans;

LL toLL(const string &s) {
	LL res = 0;
	for(int i = 0 ; i < s.size() ; i++ ) 
		res = res*10 + (int)(s[i]-'0');
	return res;
}

void Try(int pos,int cnt,string res) {
	if( cnt > k ) {
		return;
	} 
	if( pos >= s.size() ) {
		ans = max(ans,toLL(res));
		return;
	}
	Try(pos+1,cnt,res);
	for(int i = pos+1 ; i < s.size() ; i++ ) {
		if( res[pos] < res[i] ) {
			string tmp = res;
			swap(tmp[pos],tmp[i]);
			Try(pos+1,cnt+1,tmp);
		}
	}
}

void solve() {
	cin >> k >> s;
	ans = 0;
	Try(0,0,s);
	cout << ans << endl;
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
