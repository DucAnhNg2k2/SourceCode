#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin >> n;
    long long a[n];
    long long b[n];
    for(int i = 0 ; i < n ; i++ ) cin >> a[i];
    if( n == 1 ){
        cout << a[0] << endl;
        return ;
    }
    else{
        b[0] = a[0]*a[1];
        b[n-1] = a[n-1]*a[n-2];
        for(int i = 1 ; i <= n-2 ; i++ ){
            b[i] = a[i-1]*a[i+1];
        }
        for(int i = 0 ; i < n ; i++ ) cout << b[i] << ' ';
        cout << endl;
    }
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while( t-- ){
        solve();
    }
} 
