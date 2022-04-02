#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long ull;
typedef long long ll;
typedef double db;
 
#define FOR(a,b) for(ll i = a ; i < b ; i++ )
#define FORR(i,a,b) for(ll i = a ; i < b ; i++ )
#define sz(x) (x).size()
typedef priority_queue<ll> Queue;
typedef vector<ll> vll ;
typedef vector<int> vi ;
typedef map<ll,ll> mll ;
typedef map<string,int> msi ;
 
const ll mod = 1e9+7;
struct P{
	int t;
	char c;
};
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int time = 3*60 + 30;
	int start = 0 ;
	int k ;
	cin >> k;
	int n;
	cin >> n;
	P a[n];
	FOR(0,n) cin >> a[i].t >> a[i].c ;
	FOR(0,n){
		start += a[i].t ;
		if( start >= time ){
			cout << k;
			break;
		}
		if( a[i].c == 'T') k++;
		if( k >=9 ) k = 1;
	}
	
}     
 
