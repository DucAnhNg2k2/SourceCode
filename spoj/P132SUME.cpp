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
const double eps = 1e-6;
const int inf = 1e9;
const LL Linf = (LL) 1e18;
const LL MOD = 1000000007LL;
#define PI 3.141592653589793238;
#define maxn 100005

struct point
{
    double x, y;
};
 
point a[maxn];
 
double cross_product(point a, point b)
{
    return (a.x * b.y - a.y * b.x);
}
 
double S_triangle(int x1,int y1,int x2,int y2,int x3,int y3)
{
	double a = sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2));
	double b = sqrt((x1-x3)*(x1-x3)+(y1-y3)*(y1-y3));
	double c = sqrt((x3-x2)*(x3-x2)+(y3-y2)*(y3-y2));
	double p = (a+b+c)/2;
	return sqrt(p*(p-a)*(p-b)*(p-c));
}

int ccw(point a, point b, point c) {
    point p1, p2;
    p1.x = b.x - a.x;
    p1.y = b.y - a.y;
 
    p2.x = c.x - a.x;
    p2.y = c.y - a.y;
 
    if (cross_product(p1, p2) > 0) return 1;
    else if (cross_product(p1, p2) < 0) return -1;
    else return 0;
}

void solve() {
	point a,b,c;
	cin >> a.x >> a.y >> b.x >> b.y >> c.x >> c.y;
	printf("%0.1lf\n", S_triangle(a.x,a.y,b.x,b.y,c.x,c.y));
	int n, dem = 0;
	cin >> n;
	FOR(i,1,n) {
		point tmp;
		cin >> tmp.x >> tmp.y;
		int check = true;
		if( ccw(tmp,a,b)*ccw(c,a,b) < 0 ) check = false;
		if( ccw(tmp,b,c)*ccw(a,b,c) < 0 ) check = false;
		if( ccw(tmp,a,c)*ccw(b,a,c) < 0)  check = false;
		if( check ) dem++; 
	} 
	cout << dem << endl;
}
 
int main() {
//#ifndef ONLINE_JUDGE
//    freopen("test.in","r",stdin);
//    freopen("test.out","w",stdout);
//#endif
	int T = 1;
//	cin >> T;
	while( T-- )
    	solve();
    return 0;
}
