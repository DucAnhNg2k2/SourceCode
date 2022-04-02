#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    ll C , k ;
    cin >> C >> k;
    vector<ll> a;
    for(ll i = pow(10,k) ; i = pow(10,k) , i <= 1e9 ; k++ ){
        a.push_back(i);
    }
    ll sum = 0 ;
    for(int i = a.size()-1 ; i >= 0 ; i-- ){
        while( C >= a[i] ){
            C -= a[i];
            sum += a[i];
        }
    }
    if( C >= a[0]*1.0/2) C = a[0];
    else C = 0;
    cout << sum + C;
} 
