#include <bits/stdc++.h>
//	#include"DucAnh.h"
using namespace std;
#define endl '\n'
#define MAXN 100000
typedef long long ll;

struct point {
	double x,y;
};

bool cmp_x(point a,point b) {
	return a.x < b.x;
}

bool cmp_y(point a,point b) {
	return a.y < b.y;
}

point a[MAXN+5],t[MAXN+5];
double ans;
int n;

void distance(point a,point b) {
	double res = sqrt((a.x-b.x)*(a.x-b.x)+(a.y-b.y)*(a.y-b.y));
	ans = min(ans,res);	
}

void Try(int l,int r) {
	if( r <= l ) return;
	if( r == l+1 ) {
		distance(a[l],a[r]);
		return;
	}
	int m = (l+r)/2;
	double mid = a[m].x;
	Try(l,m);
	Try(m+1,r);
	merge(a+l,a+m+1,a+m+1,a+r+1,t,cmp_y);
	copy(t,t+r-l+1,a+l);
	
	int tm = 0;
    for (int i=l; i<=r; i++) 
		if (abs(a[i].x-mid) < ans) {
	        for (int j=tm-1; j>=0 && a[i].y-t[j].y < ans; j--)
	            distance(a[i], t[j]);
	        t[tm++] = a[i];
    }
}

void solve() {
	cin >> n;
	for(int i = 1; i <= n ; i++ ) {
		cin >> a[i].x >> a[i].y;
	}
	sort(a+1,a+1+n,cmp_x);
	ans = 1e18;
	Try(1,n);
	cout << setprecision(6) << fixed << ans << endl;
}

int main() 
{
	ios_base::sync_with_stdio(false);
	int t;
	cin >> t;
	while( t-- ) {
		solve();
	}
}

