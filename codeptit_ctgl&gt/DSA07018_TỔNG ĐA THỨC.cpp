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

void xuly(string s,int f[]) {
    FOR(i,0,s.size()-1) {
        if( s[i] >= '0' && s[i] <= '9' ) {
            int sum = 0;
            while( s[i] != '*' ) {
                sum = sum*10 + int(s[i]-'0');
                i++;
            }
            i += 3;
            int sum2 = 0;
            while( i < s.size() && s[i] >= '0' && s[i] <= '9') {
                sum2 = sum2*10 + int(s[i]-'0');
                i++;
            }
            f[sum2] += sum;
        }
    }
}

void solve() {
    string s1,s2;
    getline(cin,s1);
    getline(cin,s2);
    int f[maxn] = {};
    string ans = "";
    xuly(s1,f);
    xuly(s2,f);
    FORD(i,maxn-1,0) {
        if( f[i] != 0) {
            ans += to_string(f[i]) + "*x^" + to_string(i) + " + ";
        }
    }
    while( ans[ans.size()-1] == ' ' || ans[ans.size()-1] == '+') ans.pop_back();
    cout << ans << endl;
}

int main() {
    ios::sync_with_stdio(false);
#ifndef ONLINE_JUDGE
    freopen("test.in","r",stdin);
    freopen("test.out","w",stdout);
#endif
	int T = 1;
    cin >> T;
    cin.ignore();
	while( T-- )
    	solve();
    return 0;
}
