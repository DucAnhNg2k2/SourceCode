#include<iostream>
#include<algorithm>
#include<vector>
#include<stack>
#include<queue>
#include<map>
#include<set>
#define LL long long 
#define ULL unsigned long long
#define FOR(i,a,b) for(int i=a;i<=b;++i)
#define FO(i,a,b) for(int i=a;i<b;++i)
#define FORD(i,a,b) for(int i=a;i>=b;--i)
#define all(x) x.begin(),x.end()
#define fi first
#define se second
#define pb push_back
#define mp make_pair
#define endl '\n'
#define debug cout << "YES" << endl
using namespace std;

typedef vector<LL> vll;
typedef pair<int,int> pII;
typedef pair<LL,LL> pLL;
const int inf = 1e9;
const LL Linf = (LL) 1e18;
const LL MOD = 1000000007LL;
#define maxn 100005

string s;
LL n,res;
bool vs[10] = {};

void Try(LL ans,int dem) {
	if( dem == n+1 ) {
		res = min(ans,res);
		return;
	}
	int du = ans%10;
	if(s[dem] == 'D') {
		FOR(i,1,du-1) {
			if( vs[i] == false ) {
				vs[i] = true;
				Try(ans*10+i,dem+1);
				vs[i] = false;
			}
		}
	}
	else {
		FOR(i,du+1,9) {
			if( vs[i] == false ) {
				vs[i] = true;
				Try(ans*10+i,dem+1);
				vs[i] = false;
			}
		}
	}
}

void solve() { 
	cin >> s;
	n = s.size();
	s = ' ' + s;
	res = inf;
	FOR(i,1,9) {
		vs[i] = true;
		Try(i,1);
		vs[i] = false;
	}
	cout << res << endl;
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
