#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll y , k , n;
    cin >> y >> k >> n;
    ll a = y/k;
    bool ok = false;
    while(true){
        ll s = a*k;
        if( s > n ) break;
        else
        {
            ll x = s-y;
            if( x >= 1 ){
                cout << x << ' ';
                ok = true;
            }
        }
        a++;
    }
    if( ok == false ) cout << -1 ;
} 
