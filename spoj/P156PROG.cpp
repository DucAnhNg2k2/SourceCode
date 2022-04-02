// FORM 
#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long ull;
typedef long long ll;
typedef double db;
 
#define FOR(a,b) for(ll i = a ; i < b ; i++ )
#define FORR(i,a,b) for(ll i = a ; i < b ; i++ )
const ll mod = 1e9+7;
struct P{
	ll data;
	int index;
};
bool cmp(P a , P b){
	return a.data > b.data;
}
main()
{
	// 
   ios_base::sync_with_stdio(0);
//   	cin.tie(0);
	int n;
	int cs = 1;
	while( cin >> n){
		P a[n], b[n] ;
		FOR(0,n){
			cin >> a[i].data;
			a[i].index = i+1;
		}
		FOR(0,n){
			cin >> b[i].data;
			b[i].index = i+1;
		}
		sort(a,a+n,cmp);
		sort(b,b+n,cmp);
		ll max = - 1;
		FOR(0,n){
			if( a[i].index != b[i].index ){
				max = i+1 ;
				break ;
			}
		}
		cout << "Case " << cs << ": "; cs++;
		if( max == -1 ) cout << "agree";
		else cout << max;
		cout << endl;
	}
}     
 
// DANG HIEP + DUC ANH 
