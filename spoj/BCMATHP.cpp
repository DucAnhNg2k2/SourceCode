#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int chusodautien(ll n){
    while( n > 10 ){
        n /=10;
    }
    return n;
}
int main(){
    int a,b;
    cin >> a >> b;
    bool oke = false;
    for(int i = 1 ; i <=62 ; i++ ){
        ll e = i;
        ll pow2E = pow(2,e);
        if( chusodautien(pow2E) == b && e > a){
            cout << e;
            oke = true;
            break;
        }
    }
    if( oke == false ) cout << 0;
} 
