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
	string a;
	cin >> a;
	a = '@' + a;
	int n = a.size() - 1;
	int i = n - 1;
	while( i > 0 && a[i] >= a[i+1]  ) i--;
	if( i == 0 ) cout << "BIGGEST" << endl;
	else{
		int k = n;
		while( a[i] >= a[k] ) k--;
		swap(a[i],a[k]);
		int c = n , r = i+1;
		while( r < c ){
			swap(a[r],a[c]);
			r++;
			c--;
		}
		a.erase(0,1);
		cout << a << endl;
	}
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
