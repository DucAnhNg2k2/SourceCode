#include<bits/stdc++.h>
using namespace std;
void solve(){
    long long a,m;
    cin >> a >> m;
    bool ok= false;
    for(int x = 0 ; x <= m- 1 ; x++){
        if( a*x % m == 1 ){
            cout << x << endl;
            ok = true;
            return ;
        }
    }
    if( ok == false ) cout << -1 << endl;
}
int main(){
    int t;
    cin >> t;
    while( t-- ){
        solve();
    }
} 
