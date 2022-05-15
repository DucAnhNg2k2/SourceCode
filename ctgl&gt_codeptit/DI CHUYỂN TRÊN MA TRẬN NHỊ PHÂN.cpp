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
#define all(x) x.begin(),x.end()
#define debug cout << "YES" << endl
using namespace std;

typedef pair<int,int> pII;
typedef pair<LL,LL> pLL;
const int inf = 1e9;
const LL Linf = (LL) 1e18;
const LL MOD = 1000000007LL;
#define PI 3.141592653589793238;
#define maxn 100005

pair<string,string> t[] = {
    {"0000","0"},
    {"0001","1"},
    {"0010","2"},
    {"0011","3"},
    {"0100","4"},
    {"0101","5"},
    {"0110","6"},
    {"0111","7"},
    {"1000","8"},
    {"1001","9"},
    {"1010","A"},
    {"1011","B"},
    {"1100","C"},
    {"1101","D"},
    {"1110","E"},
    {"1111","F"},
};

void solve() {
    int n;
    cin >> n;
    vector<vector<string>> s(n+5,vector<string>(n+5,""));
    vector<vector<string>> f(n+5,vector<string>(n+5,""));
    FOR(i,1,n) {
        FOR(j,1,n) {
            cin >> s[i][j];
        }
    }
    FOR(i,1,n) {
        FOR(j,1,n) {
            f[i][j] = max(f[i-1][j],f[i][j-1]) + s[i][j];
        }
    }
    string ans = f[n][n];
    while( ans.size()%4 != 0 ) ans = '0' + ans;
    int dem = 0;
    FOR(i,0,ans.size()-1) {
        if(ans[i] == '0') dem++;
    }
    if(dem == ans.size()) {
        cout << 0;
        return;
    }
    while(ans[0] == '0' && ans[1] == '0' && ans[2] == '0' && ans[3] == '0') {
        FOR(i,1,4) {
            ans.erase(0,1);
        }
    }
    for(int i = 0; i < ans.size(); i++) {
        string temp = "";
        temp += ans[i];
        temp += ans[i+1];
        temp += ans[i+2];
        temp += ans[i+3];
        for(auto j:t) {
            if(j.fi == temp) {
                cout << j.se;
                break;
            }
        }
        i += 3;
    }
}

int main(){
    ios::sync_with_stdio(false);
#ifndef ONLINE_JUDGE
    freopen("test.in","r",stdin);
    freopen("test.out","w",stdout);
#endif
	int T = 1;
//	cin >> T;
	while( T-- )
    	solve();
}