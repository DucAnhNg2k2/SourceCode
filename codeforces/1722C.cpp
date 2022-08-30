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
    map<string,int> m;
    set<string> s1,s2,s3;
    int c1 = 0,c2 = 0, c3 = 0;
    FOR(i,1,n) {
        string x;
        cin >> x;
        m[x]++;
        s1.insert(x);
    }
    FOR(i,1,n) {
        string x;
        cin >> x;
        m[x]++;
        s2.insert(x);
    }
    FOR(i,1,n) {
        string x;
        cin >> x;
        m[x]++;
        s3.insert(x);
    }
    for(auto i:m) {
        if(i.se == 1) {
            if(s1.find(i.fi) != s1.end()) c1 += 3;
            if(s2.find(i.fi) != s2.end()) c2 += 3;
            if(s3.find(i.fi) != s3.end()) c3 += 3;
        }
        if(i.se == 2) {
            if(s1.find(i.fi) != s1.end()) c1 += 1;
            if(s2.find(i.fi) != s2.end()) c2 += 1;
            if(s3.find(i.fi) != s3.end()) c3 += 1;
        }
    }
    cout << c1 << ' ' << c2 << ' ' << c3 << endl;
}

int main() {
    ios::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);
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