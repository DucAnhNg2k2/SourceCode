#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    int n;
    cin >> n;
    ll a[n+1];
    ll l[n+1];
    for(int i = 1 ; i<= n ; i++ ) cin >> a[i];
    l[1] = a[1];
    for(int i = 2 ; i<= n ; i++ ) l[i] =l[i-1] + a[i];
    ll s = 0;
    for(int i = 1 ; i <= n ; i++ ){
        ll t = a[i]*(l[n]-l[i]);
        s += t;
    }
    cout << s;
} 
