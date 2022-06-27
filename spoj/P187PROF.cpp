#pragma GCC optimize("O2")
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
const int IMAX = 1e9;
const LL LMAX = (LL) 1e18;
const LL MOD = 1000000007LL;
#define PI 3.141592653589793238;
#define maxn 100005
 
 
void solve() {
    int n;
    cin >> n;
    string s[n+5];
    FOR(i,1,n) {
        cin >> s[i];
    }
    s[n+1] = "@";
    sort(s+1,s+1+n,[](string a,string b){
        if(a.size()==b.size()) {
            return a < b;
        }
        return a.size() > b.size();
    });
    map<string,LL> m;
    LL ans = 0;
    string pre = "-1"; LL dem = 0;
    set<string> S;
    FOR(i,1,n+1) {
        if(s[i] == pre) {
            dem++;
            ans += m[s[i]];
        }
        else {
            for(auto i:S) m[i] += dem;
            S.clear();
            ans += (dem)*(dem-1);
            ans += m[s[i]];
            dem = 1;
            pre = s[i];
            for(int i1 = 0; i1 < s[i].size(); i1++) {
                string str = "";
                for(int i2 = i1; i2 < s[i].size(); i2++) {
                    str += s[i][i2];
                    S.insert(str);
                }
            }
        }
    }
    cout << ans;
}
 
int main() {
    ios::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);
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