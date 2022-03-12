#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;
typedef unsigned long long ull;
typedef vector<long long> vll;
typedef vector<int> vi;

#define mp make_pair 
#define pb push_back
#define endl '\n'
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define min(a,b) ((a) < (b) ? (a) : (b))
#define max(a,b) ((a) > (b) ? (a) : (b))
#define sz(x) (int)(x.size())
#define FOR(i,l,r) for(int i=l;i<=r;++i)
#define FOD(i,l,r) for(int i=r;i>=l;--i)

const long long MOD = 1000000007LL;


int main()
{	
	int n,max = 0;
	cin >> n;
	vll a(n+5),b(1e6,0);
	FOR(i,1,n) 
	{
		cin >> a[i];
		b[a[i]]++;
		if( max < b[a[i]])
			max = b[a[i]];
	}
	FOR(i,1,n) {
		if( b[a[i]] == max ) {
			cout << a[i] << ' ' << b[a[i]] ;
			return 0;
		}
	}
}



