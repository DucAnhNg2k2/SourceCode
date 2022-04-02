#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long ull;
typedef long long ll;
typedef double db;
#define FOR(a,b) for(ll i = a ; i < b ; i++ )
#define FORR(i,a,b) for(ll i = a ; i < b ; i++ )
const ll mod = 1e9+7;
vector<bool> mark(1e6+1,false);
void sangnt(){
	mark[0] = true;
	mark[1] = true;
	for(int i = 2 ; i*i <= 1e6 ; i++ ){
		if( !mark[i] ){
			for(int j = i*i ; j <= 1e6 ; j+=i ){
				mark[j] = true;
			}
		}
	}
}
int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	sangnt();
	int t;
	cin >> t;
	while( t-- ){
		int l , r;
		cin >> l >> r;
		int dem = 0 ;
		for(int i = l ; i+6 <= r ; i++ ){
			if( mark[i] == false && mark[i+6] == false ) dem++;
		}
		cout << dem << endl;
	}
} 
