#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    int t;
    cin >> t;
    while( t-- ){
        ll n;
        cin >> n;
        int dem = 0 ;
        for(ll x = 2*n  ; x > n ; x-- ){
        	if( (ll)(x*n)%(x-n) == 0 ) dem += 2;
		}
		cout << dem -1 << endl;
    }
} 
