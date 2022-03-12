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
	faster();
	int n;
	cin >> n;
	vll a(n);
	int dem1 = 0 , dem2 = 0 , dem3 = 0 ;
	FOR(i,0,n-1) {
		cin >> a[i];
		if( a[i] > 0 ) dem1++;
		else if( a[i] == 0 ) dem2;
		else dem3++;
	}
	sort(a.begin(),a.end());
	vll m;
	m.push_back(a[0]*a[1]*a[2]);
	m.push_back(a[0]*a[n-1]*a[n-2]);	
	m.push_back(a[0]*a[1]*a[n-1]);
	m.push_back(a[n-1]*a[n-2]*a[n-3]);
	m.push_back(a[n-1]*a[n-2]*a[0]);
	m.push_back(a[n-2]*a[0]*a[1]);
	sort(m.begin(),m.end());
	cout << max(m[0],m[m.size()-1]);
}



