#include<bits/stdc++.h>
using namespace std;
long long gcd(long long a,long long b){
    while( a*b != 0 ){
        if( a > b ) a%=b;
        else b%=a;
    }
    return a + b;
}
void solve(){
    long long a , x , y;
    cin >> a >> x >> y;
    for(int i = 1 ; i<= gcd(x,y) ; i++ ) cout << a ;
    cout << endl;
}
int main(){
    int t;
    cin >> t;
    while( t-- ){
        solve();
    }
} 
