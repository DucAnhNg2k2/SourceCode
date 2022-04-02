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
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	ll n , a , b;
	cin >> n >> a >> b;
	vll s(n);
	int dem1 = 0 ;
	int dem2 = 0 ;
	int dem = 0 ;
	FOR(0,n){
		cin >> s[i];
		if( s[i] == 1 ){
			if( a > 0 ){
				a--;
			}
			else if( b > 0 ){
				b--;
				a++;
			}
			else dem++;
		}
		if( s[i] == 2 ){
			if( b > 0 ){
				b--;
			}
			else dem+=2;
		}
	}
	cout << dem ;
}     
 
