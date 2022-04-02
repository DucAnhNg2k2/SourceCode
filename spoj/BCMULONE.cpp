#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
	int t;
	cin >> t;
	while( t-- ){
	ll n;
	cin >> n;
	ll socs = 2*n-1;
	int dem = 0 ;
	while( socs - dem*18 > 0 ){
		dem++;
	}
	dem--;
	// ko phai 2*n -1 vi con in 1 o cuoi cung 
	ll csDu = 2*n-2 - dem*18;
	for(int i = 0 ; i < dem ; i++ ){
		cout << "123456790";
	}
	if( csDu != 0 ){
		for(int i = 1 ; i <= csDu*1.0/2 +1 ; i++ ) cout << i;
		for(int i = csDu*1.0/2 ; i >= 2 ; i-- ) cout << i;
	}
 
	for(int i = 0 ; i < dem ; i++ ){
		cout << "098765432";
	}
	cout << 1 << endl;
}
	
} 
