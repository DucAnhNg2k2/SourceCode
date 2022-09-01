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
#define maxn 805

void solve() {
    LL x,y;
    cin >> x >> y;
    LL b = -2*(x+y), c = y*y-x*x;
    double delta = b*b - 4*c;
    vector<double> v;
    double s1 = (-b-sqrt(delta))*1.0/2;
    double s2 = y-s1;
    double s3 = sqrt(s1*s1+s2*s2);
    if(s1>s2) swap(s1,s2);
    printf("%.9lf %.9lf %.9lf",s1,s2,s3);
}

int main() {
//    ios::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);
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