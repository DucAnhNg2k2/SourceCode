#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll m;
ll mod(string a){
    ll sum = 0;
    for(int i = 0 ; i < a.length() ; i++ ){
        sum = sum*10 + (int)(a[i]-'0');
        sum %= m;
    }
    return sum;
}
ll power(string a,ll b){
    if( b == 0 ) return 1;
    if( b == 1 ) return mod(a);
    else{
        ll t = power(a,b/2)%m;
        if( b%2 == 0 ) return (t*t)%m;
        else return ((t*t)%m*mod(a))%m;
    } 
}
void solve(){
    string a;
    cin >> a;
    ll b;
    cin >> b >> m;
    cout << power(a,b) << endl;
}
int main(){
    int t;
    cin >> t;
    while( t-- ){
        solve();
    }
} 
