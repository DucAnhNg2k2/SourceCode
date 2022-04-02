#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll power(ll x,ll y ,ll p){
    if( y == 0 ) return 1;
    if ( y == 1 ) return x%p;
    else{
        ll t = power(x,y/2,p)%p;
        if( y % 2 ==0 ) return (t*t)%p;
        else return ((t*t)%p*x)%p;
    }
}
void solve(){
    ll x,y,p;
    cin >> x >> y >> p;
    cout << power(x,y,p) << endl;
}
int main(){
    int t;
    cin >> t;
    while( t-- ){
        solve();
    }
} 
