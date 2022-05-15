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



void solve() {
    LL a,b; 
    cin >> a >> b;
    queue<LL> q;
    vector<LL> v;
    q.push(0);
    while(q.size()) {
        LL top = q.front(); q.pop();
        if( top > inf ) continue;
        v.pb(top);
        q.push(top*10+4);
        q.push(top*10+7);
    }
    LL temp = a,ans = 0;
    for(auto i:v) {
        if(i >= temp) {
            LL num;
            if(i <= b) num = (i-temp+1);
            else num = (b-temp+1);
            ans += num*i;
            temp = i+1; 
            if(temp >= b) break;
        }
    }
    cout << ans;
}

int main(){
    ios::sync_with_stdio(false);
	int T = 1;
//	cin >> T;
	while( T-- )
    	solve();
}