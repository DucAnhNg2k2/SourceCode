#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll gt(int n){
    if( n == 1 ) return 1;
    else return n*gt(n-1);    
}
ll solve(ll n){
    ll s = 0;
    int dem = 1;
    while( n > 0 ){
        int sodu = n%10;
        s += gt(dem)*sodu;
        n /=10;
        dem++;
    }
    return s;
}
int main(){
    ios_base::sync_with_stdio(false);
    int t;
    cin >> t;
    while( t-- ){
        ll n;
        cin >> n;
        cout << solve(n) << endl;
    }
} 
