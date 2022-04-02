#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll MOD(string a, ll b){
    ll sum = 0 ;
    for(int i = 0 ; i < a.length() ; i++ ){
        sum = sum*10 + (int)(a[i]-'0');
        sum %= b;
    }
    return sum;
}
void solve(){
    ll a;
    cin >> a;
    string s;
    cin >> s;
    for(int i = 1 ; i <= sqrt(a) ; i++ ){
        if( a% i == 0 ){
            ll x = a/i;
            if( MOD(s,x) == 0 ){
                cout << x << endl;
                return ;
            }
        }
    }
    for(int i = sqrt(a) ; i >= 1 ; i-- ){
        if( a%i == 0 ){
            ll x = i;
            if( MOD(s,x) == 0 ){
                cout << x << endl;
                return ;
            }
        }
    }
}
int main(){
    int t;
    cin >> t;
    while( t-- ){
        solve();
    }
} 
