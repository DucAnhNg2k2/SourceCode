// FORM 
#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long ull;
typedef long long ll;
typedef double db;
 
#define FOR(a,b) for(ll i = a ; i < b ; i++ )
#define FORR(i,a,b) for(ll i = a ; i < b ; i++ )
// #define priority_queue Queue
typedef vector<ll> vll ;
typedef vector<int> vi ;
typedef map<ll,ll> mll ;
typedef map<string,int> msi ;
const ll mod = 1e9+7;
ll sum = 0 ;
struct cmp{
	bool operator()(ll a,ll b){
		return a > b;
	}
};
priority_queue<ll,vll,cmp> q;
int main()
{
	ios_base::sync_with_stdio(0);
	int n;
	cin >> n;
	FOR(0,n){
		ll x;
		cin >> x;
		q.push(x);
	}
	ll sum = 0 ;
	int t = n - 1;
	while( t-- ){
        ll s = q.top();
		q.pop();
		s += q.top();
		q.pop();
		s%=mod;
		q.push(s);
		sum += s%mod;
		sum %=mod;
	}
	cout << sum%mod;
}     
