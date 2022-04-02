#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
bool check(ll x){
    for(ll i = 2 ; i <= sqrt(x) ; i++ ){
        ll z = i*i;
        if( x%z == 0 ) return false;
    }
    return true;
}
int main(){
    ios_base::sync_with_stdio(false);
    ll n;
    cin >> n;
    for(ll i = 1 ; i <= sqrt(n) ; i++ ){
        if( n%i == 0 ){
            ll x = n*1.0/i;
            if( check(x) ){
                cout << x;
                return 0;
            }
        }
    }
    for(ll i = sqrt(n) ; i >= 1 ; i-- ){
        if( n%i == 0 ){
            ll x = i;
            if( check(x) ){
                cout << x;
                return 0;
            }
        }
    }
}  
