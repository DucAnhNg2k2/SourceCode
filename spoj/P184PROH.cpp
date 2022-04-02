// code C++
#include<bits/stdc++.h>
using namespace std;
 
typedef unsigned long long ull;
typedef long long ll;
typedef double db;
 
#define FOR(a,b) for(ll i = a ; i < b ; i++ )
#define FORR(i,a,b) for(ll i = a ; i < b ; i++ )
#define sz(x) (x).size()
 
typedef vector<ll> vl;
const ll mod = 1e9 + 7;
struct Point
{
	ll data ;
	int index ;
};
bool cmp(Point a,Point b)
{
	if( a.data < b.data ) return true ;
	if( a.data == b.data )
	{
		if( a.index < b.index ) return true ;
	}
	return false ;
}
int main()
{   ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int n;
	cin >> n;
	vector<Point> p(n) ;
	FOR(0,n)
	{
		cin >> p[i].data ;
		p[i].index = i+1 ;
	}
	sort(p.begin(),p.end(),cmp);
	vector<Point> a,b;
// neu so sau lon hon so truoc thi index phai be hon 
	a.push_back(p[0]);
	int min = p[0].index;
	FOR(0,n)
	{
		if( p[i].index < min )
		{
			a.push_back(p[i]);
			min = p[i].index ;
		}
	}
// neu so truoc nho hon so sau thi index phai lon hon
// vi neu da be hon roi index lai con be hon thi chiu 
	b.push_back(p[n-1]);
	int max = p[n-1].index;
	for(int i = n-2 ; i >= 0 ; i-- )
	{
		if( p[i].index > max )
		{
			b.push_back(p[i]);
			max = p[i].index ;
		}
	}
	ll kc = -1e18 ;
	FORR( i,0,sz(a) )
	{
		FORR( j,0,sz(b) )
		{
			if( a[i].index < b[j].index  )
			{
				if( kc < b[j].data - a[i].data ) kc = b[j].data - a[i].data ;
			}
		}
	}
	cout << kc ;
} 
