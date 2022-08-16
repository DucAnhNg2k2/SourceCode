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
const LL MOD = 998244353;
#define maxn 100005

LL toLL(const string &s) {
	LL res = 0;
	for(int i = 0 ; i < s.size() ; i++ ) 
		res = res*10 + (int)(s[i]-'0');
	return res;
}

template<class T> bool IsPrime(const T &n) {
	for(T i = 2 ; i <= sqrt(n) ; ++i ) 
		if( n%i == 0 ) 
			return false;
	return n > 1;
}

void solve() {
    string first,last;
    cin >> first >> last;
    vector<LL> f(100005,inf);
    queue<string> q;
    f[toLL(first)] = 0;
    q.push(first);
    while(q.size()) {
        string str = q.front(); q.pop();
        if( str == last) {
            cout << f[toLL(str)] << endl;
            return;
        }
        FOR(i,0,3) {
            string x = str;
            FOR(j,'0','9') {
                if( i==0 && j =='0') {
                    continue;
                }
                x[i] = j;
                if( IsPrime(toLL(x)) == false ) continue;
                if( f[toLL(x)] > f[toLL(str)]+1) {
                    q.push(x);
                    f[toLL(x)] = f[toLL(str)]+1;
                }
            }
        }
    }
}

int main() {
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
