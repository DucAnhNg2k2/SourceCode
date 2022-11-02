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
	int d;
    string s;
    cin >> d >> s;
    int n = s.size();
    vector<pII> v(26);
    for(auto i:s) {
        v[i-'A'].se++;
    }
    sort(v.begin(),v.end(),[](pII a,pII b) { return a.se > b.se;});
    vector<bool> vs(s.size()+5,false);
    int pos = 1;
    for(auto i:v) {
        if( i.se > 0 ) {
            while( pos <= n && vs[pos] == true ) {
                pos++;
            }
            int index = pos;
            for(int j = 1 ; j <= i.se ; j++ ) {
                if( index > n || vs[index] ) {
                    cout << -1 << endl;
                    return;
                }
                vs[index] = true;
                index += d;
            }
        }
    }
    cout << 1 << endl;
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
