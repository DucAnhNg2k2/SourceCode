#include<bits/stdc++.h>

using namespace std;

#define endl '\n' 
#define pb push_back
#define FOR(i,a,b) for(int i = a ; i <= b ; ++i )
typedef long long ll;
typedef vector<ll> vll;
typedef vector<int> vi;
const ll mod = 1000000007LL;

struct Node
{
	int data,pos;
	Node(int data,int pos)
	{
		this->data = data;
		this->pos = pos;
	}
};

int bin_search(vector<Node> &a,int x)
{
	if( x > a[a.size()-1].data ) return -1;
	int l = 0 , r = a.size()-1;
	while( l < r )
	{
		int m = (l+r)/2;
		if( a[m].data >= x ) r = m;
		else l = m+1;
	}
	return a[l].pos;
}

void solve() 
{
	int n,ans = 0;
	cin >> n;
	vi a(n+5);
	for(int i = 1 ; i <= n ; i++ ) 
		cin >> a[i];
	vector<Node> f;
	f.pb(Node(a[n],n));
	for(int i = n-1 ; i >= 1 ; i-- )
	{
		int pos = bin_search(f,a[i]);
		if( ans < pos-i ) ans = pos-i;
		if( a[i] > f[f.size()-1].data )
			f.pb(Node(a[i],i));
	}
	cout << ans << endl;
}
int main() 
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t;
	cin >> t;
	while( t-- ) 
	{
		solve();
	}
}
