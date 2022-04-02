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
	int n , a , b;
	cin >> n >> a >> b;
	if( a < b ) swap(a,b);
	int dem = n/a;
	n %= a;
	while( dem >= 0 ){
		if( n%b == 0 ){
			dem += n/b;
			break;
		}
		else{
			dem--;
			n+= a;
		}
	}
	if( dem == 0 ){
		cout << -1 << endl;
	}
	else cout << dem << endl;
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
