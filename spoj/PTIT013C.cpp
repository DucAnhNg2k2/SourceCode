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
void solve(){
	ll a , b , c , d;
	cin >> a >> b >> c >> d;
	b = abs(b);
	d = abs(d);
	d = -d;
	ll t = sqrt( (a-c)*(a-c) + (b-d)*(b-d) );
	cout << t  << endl;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
   	int t;
   	cin >> t;
   	while( t-- ){
   		solve();
	}
} 
