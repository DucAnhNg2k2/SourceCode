#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll mod = 1e9+7;
ll power(ll a, ll b ){
    if( b == 0 ) return 1;
    ll c = power(a,b/2)%mod;
    if( b%2 == 0 ) return (c*c)%mod;
    else return (((c*c)%mod)*a)%mod;
}
void solve(){
    ll h = 1, g;
    int n;
    cin >> n;
    ll a ;
    cin >> a;
    g = a;
    h *= a;
    for(int i = 2 ; i <= n ; i++ ){
        cin >> a;
        h *=a;
        h%=mod;
        g = __gcd(g,a);
    }
    cout << power(h,g) << endl;
}
int main(){
    int t;
    cin >> t;
    while( t-- ){
        solve();
    }
} 
