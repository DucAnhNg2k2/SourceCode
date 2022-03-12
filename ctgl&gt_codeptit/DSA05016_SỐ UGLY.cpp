#include<bits/stdc++.h>
using namespace std;
 
typedef long long ll;
typedef vector<long long> vll;
typedef vector<int> vi;
 
#define FOR(i,a,b) for(int i=a;i<=b;i++)

vll v(6);
int main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);
	v[0] = 0;
	v[1] = 1;
	v[2] = 2;
	v[3] = 3;
	v[4] = 4;
	v[5] = 5;
	long long Min , value ;
	while( v.size() <= 10000 ) {
		Min = 1e18 ;
		value = v[v.size()-1] ;
		for(int i = 1 ; i <= v.size() ; i++ ) {
			if( v[i]*2 > value && v[i]*2 < Min ) Min = v[i]*2;
			if( v[i]*3 > value && v[i]*3 < Min ) Min = v[i]*3;
			if( v[i]*5 > value && v[i]*5 < Min ) Min = v[i]*5;
		}
		v.push_back(Min);
	}
//	for(int i = 1 ; i <= 20 ; i++ ) cout << v[i] << ' ';
	int t;
	cin >> t;
	while( t-- ) {
		int n;
		cin >> n;
		cout << v[n] << '\n' ;
	}
}