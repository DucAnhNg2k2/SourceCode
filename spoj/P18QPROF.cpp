#include<iostream>
#include<vector>
#include<math.h>
#include<string>
#include<algorithm>
#define FOR(a,b) for(int i = a ; i < b ; i++ )
#define FORR(i,a,b) for(int i = a ; i < b ; i++ )
#define mod 1000000007
using namespace std;
typedef long long ll;
typedef double db;
struct Point{
	int a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p,q,r,s,t,u,v,w,x,y,z;
};
Point p[1000000];
bool Check(int a,int b,int c,int d){
	if( p[b].a - p[a-1].a != p[d].a - p[c-1].a ) return false;
	if( p[b].b - p[a-1].b != p[d].b - p[c-1].b ) return false;
	if( p[b].c - p[a-1].c != p[d].c - p[c-1].c ) return false;
	if( p[b].d - p[a-1].d != p[d].d - p[c-1].d ) return false;
	if( p[b].e - p[a-1].e != p[d].e - p[c-1].e ) return false;
	if( p[b].f - p[a-1].f != p[d].f - p[c-1].f ) return false;
	if( p[b].g - p[a-1].g != p[d].g - p[c-1].g ) return false;
	if( p[b].h - p[a-1].h != p[d].h - p[c-1].h ) return false;
	if( p[b].i - p[a-1].i != p[d].i - p[c-1].i ) return false;
	if( p[b].j - p[a-1].j != p[d].j - p[c-1].j ) return false;
	if( p[b].k - p[a-1].k != p[d].k - p[c-1].k ) return false;
	if( p[b].l - p[a-1].l != p[d].l - p[c-1].l ) return false;
	if( p[b].m - p[a-1].m != p[d].m - p[c-1].m ) return false;
	if( p[b].n - p[a-1].n != p[d].n - p[c-1].n ) return false;
	if( p[b].o - p[a-1].o != p[d].o - p[c-1].o ) return false;
	if( p[b].p - p[a-1].p != p[d].p - p[c-1].p ) return false;
	if( p[b].q - p[a-1].q != p[d].q - p[c-1].q ) return false;
	if( p[b].r - p[a-1].r != p[d].r - p[c-1].r ) return false;
	if( p[b].s - p[a-1].s != p[d].s - p[c-1].s ) return false;
	if( p[b].t - p[a-1].t != p[d].t - p[c-1].t ) return false;
	if( p[b].u - p[a-1].u != p[d].u - p[c-1].u ) return false;
	if( p[b].v - p[a-1].v != p[d].v - p[c-1].v ) return false;
	if( p[b].w - p[a-1].w != p[d].w - p[c-1].w ) return false;
	if( p[b].x - p[a-1].x != p[d].x - p[c-1].x ) return false;
	if( p[b].y - p[a-1].y != p[d].y - p[c-1].y ) return false;
	if( p[b].z - p[a-1].z != p[d].z - p[c-1].z ) return false;
	return true;
} 
int main()
{
    ios_base::sync_with_stdio(0);
   // cin.tie(0);
   	string s;
   	cin >> s;
   	s = '@' + s;
   	p[0].a = p[0].b = p[0].c = p[0].d = p[0].e = p[0].f = p[0].g = p[0].h = p[0].i = p[0].j = p[0].k = p[0].l = p[0].m = p[0].n = p[0].o = p[0].p = p[0].q = p[0].r = p[0].s = p[0].t = p[0].u = p[0].v = p[0].w = p[0].x = p[0].y = p[0].z = 0;
    char c = s[1];
    if ( c == 'a' ) p[1].a++;
    if ( c == 'b' ) p[1].b++;
    if ( c == 'c' ) p[1].c++;
    if ( c == 'd' ) p[1].d++;
    if ( c == 'e' ) p[1].e++;
    if ( c == 'f' ) p[1].f++;
    if ( c == 'g' ) p[1].g++;
    if ( c == 'h' ) p[1].h++;
    if ( c == 'i' ) p[1].i++;
    if ( c == 'j' ) p[1].j++;
    if ( c == 'k' ) p[1].k++;
    if ( c == 'l' ) p[1].l++;
    if ( c == 'm' ) p[1].m++;
    if ( c == 'n' ) p[1].n++;
    if ( c == 'o' ) p[1].o++;
    if ( c == 'p' ) p[1].p++;
    if ( c == 'q' ) p[1].q++;
    if ( c == 'r' ) p[1].r++;
    if ( c == 's' ) p[1].s++;
    if ( c == 't' ) p[1].t++;
    if ( c == 'u' ) p[1].u++;
    if ( c == 'v' ) p[1].v++;
    if ( c == 'w' ) p[1].w++;
    if ( c == 'x' ) p[1].x++;
    if ( c == 'y' ) p[1].y++;
    if ( c == 'z' ) p[1].z++;
   	FOR(2,s.length()){
    p[i].a = p[i-1].a;
    p[i].b = p[i-1].b;
    p[i].c = p[i-1].c;
    p[i].d = p[i-1].d;
    p[i].e = p[i-1].e;
    p[i].f = p[i-1].f;
    p[i].g = p[i-1].g;
    p[i].h = p[i-1].h;
    p[i].i = p[i-1].i;
    p[i].j = p[i-1].j;
    p[i].k = p[i-1].k;
    p[i].l = p[i-1].l;
    p[i].m = p[i-1].m;
    p[i].n = p[i-1].n;
    p[i].o = p[i-1].o;
    p[i].p = p[i-1].p;
    p[i].q = p[i-1].q;
    p[i].r = p[i-1].r;
    p[i].s = p[i-1].s;
    p[i].t = p[i-1].t;
    p[i].u = p[i-1].u;
    p[i].v = p[i-1].v;
    p[i].w = p[i-1].w;
    p[i].x = p[i-1].x;
    p[i].y = p[i-1].y;
    p[i].z = p[i-1].z;
   	 char c = s[i];
    if ( c == 'a' ) p[i].a++;
    if ( c == 'b' ) p[i].b++;
    if ( c == 'c' ) p[i].c++;
    if ( c == 'd' ) p[i].d++;
    if ( c == 'e' ) p[i].e++;
    if ( c == 'f' ) p[i].f++;
    if ( c == 'g' ) p[i].g++;
    if ( c == 'h' ) p[i].h++;
    if ( c == 'i' ) p[i].i++;
    if ( c == 'j' ) p[i].j++;
    if ( c == 'k' ) p[i].k++;
    if ( c == 'l' ) p[i].l++;
    if ( c == 'm' ) p[i].m++;
    if ( c == 'n' ) p[i].n++;
    if ( c == 'o' ) p[i].o++;
    if ( c == 'p' ) p[i].p++;
    if ( c == 'q' ) p[i].q++;
    if ( c == 'r' ) p[i].r++;
    if ( c == 's' ) p[i].s++;
    if ( c == 't' ) p[i].t++;
    if ( c == 'u' ) p[i].u++;
    if ( c == 'v' ) p[i].v++;
    if ( c == 'w' ) p[i].w++;
    if ( c == 'x' ) p[i].x++;
    if ( c == 'y' ) p[i].y++;
    if ( c == 'z' ) p[i].z++;
   }
   	int t;
   	cin >> t;
   	while(t--){
   		int a,b,c,d;
   		cin >> a >> b >> c >> d;
   		if( Check(a,b,c,d) ) cout << "YES\n";
   		else cout << "NO\n";
   	}
 
//	FOR(1,s.length()){
//		cout << i << endl; 
//		if( p[i].a != 0 ) cout << 'a' << ' ' << p[i].a << endl;
//		if( p[i].b != 0 ) cout << 'b' << ' ' << p[i].b << endl;
//		if( p[i].c != 0 ) cout << 'c' << ' ' << p[i].c << endl;
//		if( p[i].d != 0 ) cout << 'd' << ' ' << p[i].d << endl;
//		if( p[i].e != 0 ) cout << 'e' << ' ' << p[i].e << endl;
//		if( p[i].f != 0 ) cout << 'f' << ' ' << p[i].f << endl;
//		if( p[i].g != 0 ) cout << 'g' << ' ' << p[i].g << endl;
//		if( p[i].h != 0 ) cout << 'h' << ' ' << p[i].h << endl;
//		if( p[i].i != 0 ) cout << 'i' << ' ' << p[i].i << endl;
//		if( p[i].j != 0 ) cout << 'j' << ' ' << p[i].j << endl;
//		if( p[i].k != 0 ) cout << 'k' << ' ' << p[i].k << endl;
//		if( p[i].l != 0 ) cout << 'l' << ' ' << p[i].l << endl;
//		if( p[i].m != 0 ) cout << 'm' << ' ' << p[i].m << endl;
//		if( p[i].n != 0 ) cout << 'n' << ' ' << p[i].n << endl;
//		if( p[i].o != 0 ) cout << 'o' << ' ' << p[i].o << endl;
//		if( p[i].p != 0 ) cout << 'p' << ' ' << p[i].p << endl;
//		if( p[i].q != 0 ) cout << 'q' << ' ' << p[i].q << endl;
//		if( p[i].r != 0 ) cout << 'r' << ' ' << p[i].r << endl;
//		if( p[i].t != 0 ) cout << 't' << ' ' << p[i].t << endl;
//		if( p[i].s != 0 ) cout << 's' << ' ' << p[i].s << endl;
//		if( p[i].u != 0 ) cout << 'u' << ' ' << p[i].u << endl;
//		if( p[i].v != 0 ) cout << 'v' << ' ' << p[i].v << endl;
//		if( p[i].w != 0 ) cout << 'w' << ' ' << p[i].w << endl;
//		if( p[i].x != 0 ) cout << 'x' << ' ' << p[i].x << endl;
//		if( p[i].y != 0 ) cout << 'y' << ' ' << p[i].y << endl;
//		if( p[i].z != 0 ) cout << 'z' << ' ' << p[i].z << endl;
//
//	}
} 
