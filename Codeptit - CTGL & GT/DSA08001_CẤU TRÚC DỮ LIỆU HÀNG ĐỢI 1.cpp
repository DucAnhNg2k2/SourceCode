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
#define maxn 1000005

void solve() {
    queue<int> q;
    int n;
    cin >> n;
    while(n--) {
        int c;
        cin >> c;
        switch (c)
        {
        case 1:
            cout << q.size() << endl;
            break;
        case 2:
            if(q.empty()) cout << "YES" << endl;
            else cout << "NO" << endl;
            break;
        case 3:
            int x;
            cin >> x;
            q.push(x);
            break;
        case 4:
            if(q.size()) q.pop();
            break;
        case 5:
            if(q.empty()) cout << -1 << endl;
            else cout << q.front() << endl;
            break;
        case 6:
            if(q.empty()) cout << -1 << endl;
            else cout << q.back() << endl;
            break;
        }
    }
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