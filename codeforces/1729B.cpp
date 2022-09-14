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
#define maxn 10000005

void solve() {
    int n;
    cin >> n;
    char s[n+5];
    FOR(i,1,n) {
        cin >> s[i];
    }
    stack<char> st;
    FORD(i,n,1) {
        int num;
        if(s[i] == '0') {
            char c1 = s[--i];
            char c2 = s[--i];
            num = (c2 - '0')*10 + (c1-'0');
        }
        else {
            num = s[i] - '0';
        }
        st.push('a'+(num-1));
    }
    while(st.size()) {
        cout << st.top();
        st.pop();
    }
    cout << endl;
}

int main() {
    ios::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);
#ifndef ONLINE_JUDGE
   freopen("test.in","r",stdin);
   freopen("test.out","w",stdout);
#endif
	int T = 1;
    cin >> T;
	while(T--) {
        solve();
    }
    return 0;
}
