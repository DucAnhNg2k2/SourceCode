#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    ios_base::sync_with_stdio(false);
    ll n , B;
    cin >> n >> B;
    ll a[n];
    map<ll,ll> m;
    for(int i = 0 ; i < n ; i++ ){
        cin >> a[i];
        m[a[i]]++;
    }
    ll dem = 0;
    for(int i = 0 ; i < n ; i++ ){
        if( B - a[i] == a[i] ){
            if( m[a[i]] > 1 ){
                ll x = m[a[i]];
                dem += (x*(x-1))*1.0/2;
                m[a[i]] = 0;
            }
        }
        else if( m[B-a[i]] > 0 ){
            dem += m[a[i]]*m[B-a[i]];
            m[a[i]] = 0;
            m[B-a[i]] = 0;
        }
    }
    cout << dem;
} 
