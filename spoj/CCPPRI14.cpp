#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
bool IsPrime(int n){
	if( n < 2 ) return false;
	for(int i = 2 ; i<=sqrt(n) ; i++){
		if( n%i == 0 ) return false;
	}
	return true;
}
int main(){
	ios_base::sync_with_stdio(false);
	int t;
	cin >> t;
	while( t-- ){
		int n;
		cin >> n;
		for(int i = 1 ; i*i <= n ; i++ ){
			if( IsPrime(i) ) cout << i*i << ' ';
		}
		cout << endl;
	}
	
} 
