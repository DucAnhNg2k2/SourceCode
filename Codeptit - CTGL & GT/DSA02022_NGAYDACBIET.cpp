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

void Xuat(string s) {
    if ( (s[0]=='0' && s[1]=='0') || (s[2]=='0' && s[3]=='0') )  return;
    else if(s[2]=='2') return;
    else {
        s.insert(2, "/");
        s.insert(5, "/");
    }
    cout<<s<<endl;
}
void Try(string s){
    if(s.size()>8) return;
    if (s.size()==8) Xuat(s);
    if(s.size()==4) {
        Try(s+'2');
    }
    else {
        Try(s+'0');
        Try(s+'2');
    }
}

void solve() {
	Try("");
}

int main() {
    ios::sync_with_stdio(false);
#ifndef ONLINE_JUDGE
    freopen("test.in","r",stdin);
//    freopen("test.out","w",stdout);
#endif
	int T = 1;
//	cin >> T;
	while( T-- )
    	solve();
    return 0;
}
