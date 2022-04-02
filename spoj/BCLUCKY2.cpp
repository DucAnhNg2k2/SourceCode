#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    ios_base::sync_with_stdio(false);
    ll n;
    cin >> n;
    ll a,b;
    bool check = false;
    for( b = n ; b >= 0 ; b-- ){
        if( (n-7*b)%4 == 0 && (n-7*b)>=0 ){
            a = (n-7*b)/4;
            check = true;
            break;
        }
    }
    if( check ){
        for(int i = 1 ; i<= a ; i++ ) cout << 4;
        for(int i = 1 ; i<= b ; i++ ) cout << 7;
    }
    else cout << -1;
} 
