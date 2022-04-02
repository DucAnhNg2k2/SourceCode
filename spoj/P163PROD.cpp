#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll reset(ll n){
    ll s = 0 ;
    while( n > 0 ){
        int sodu = n%10;
        n/=10;
        if( sodu == 0 ) continue;
        else s = s*10 + sodu;
    }
    ll sum = 0 ;
    while( s > 0 ){
        sum = sum*10 + s%10;
        s/=10;
    }
    return sum;
}
int main(){
    ll a, b;
    cin >> a >> b;
    ll Old = a + b;
    a = reset(a);
    b = reset(b);
    ll New = a + b;
    Old = reset(Old);
    if( Old == New ) cout << "YES";
    else cout << "NO";
} 
