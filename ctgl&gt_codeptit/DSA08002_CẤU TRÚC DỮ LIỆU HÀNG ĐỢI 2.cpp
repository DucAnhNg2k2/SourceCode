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

deque<int> q;

void solve() {
    string x;
    cin >> x;
    if( x == "PUSH") {
        int y ;
        cin >> y;
        q.push_back(y);
    }
    // else if( x == "PUSHFRONT") {
    //     int y;
    //     cin >> y;
    //     q.push_front(y);
    // }
    else if( x == "PRINTFRONT") {
        if(q.empty()) cout << "NONE" << endl;
        else cout << q.front() << endl;
    }
    else if( x == "POP") {
        if(q.size()) q.pop_front();
    }
    // else if( x == "PRINTBACK") {
    //     if(q.empty()) cout << "NONE" << endl;
    //     else cout << q.back() << endl;
    // }
    // else if( x == "POPBACK") {
    //     if( q.size()) q.pop_back();
    // }
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