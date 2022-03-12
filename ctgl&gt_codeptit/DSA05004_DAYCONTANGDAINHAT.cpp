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
const LL MOD = 1000000007LL;
#define PI 3.141592653589793238;
#define maxn 100005

void solve() {
	int n;
    cin >> n;
    long long a[n];
    long long l[n];
    for(int i = 0 ; i < n;  i++) cin >> a[i];
    l[0] =1;
    int max;
    for(int i = 1 ; i < n ; i++){
        max = 0;
        for(int j = 0 ; j < i ; j++ ){
            if( max <= l[j] && a[j] < a[i] ) max = l[j];
        }
        l[i] = max +1;
    }
    max = 0;
    for(int i = 0 ; i < n ; i++ ){
        if( max < l[i] ) max = l[i];
    }
    cout << max << endl;
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
    return 0;
}
