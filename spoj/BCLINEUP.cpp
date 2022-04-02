#include<bits/stdc++.h>
using namespace std;
 
const int N = 1e5 + 5;
int n ;
struct Nodes{
	long long max,min;
};
long long a[N];
Nodes st[4*N];
 
void buildTree(int id,int l,int r)
{
	if( l == r ) 
	{
		st[id].max = a[l];
		st[id].min = a[l];
		return ;
	}
	int m = (l+r)/2;
	buildTree(id<<1,l,m);
	buildTree(id<<1|1,m+1,r);
 
	st[id].max = max(st[id<<1].max,st[id<<1|1].max);
	st[id].min = min(st[id<<1].min,st[id<<1|1].min);
}
 
long long getMax(int id,int l,int r,int u,int v)
{
	if( v < l || r < u ) return -1e18;
	if( u <= l && r <= v )
	{
		return st[id].max ;
	}
	int m = (l+r)/2;
	return max(getMax(id<<1,l,m,u,v),getMax(id<<1|1,m+1,r,u,v));
}
 
long long getMin(int id,int l,int r,int u,int v)
{
	if( v < l || r < u ) return 1e18;
	if( u <= l && r <= v )
	{
		return st[id].min ;
	}
	int m = (l+r)/2;
	return min(getMin(id<<1,l,m,u,v),getMin(id<<1|1,m+1,r,u,v));
}
int main()
{
    ios_base::sync_with_stdio(false);cin.tie(NULL);
	int q;
	cin >> n >> q;
    for(int i = 1 ; i <= n ; i++ ) cin >> a[i] ;
    buildTree(1,1,n);
	while( q-- )
	{
		int u,v;
		cin >> u >> v;
		long long temp = getMax(1,1,n,u,v)-getMin(1,1,n,u,v);
		cout << temp << '\n' ;
	}
