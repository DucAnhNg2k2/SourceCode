#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n , dem;
    cin >> n >> dem;
    int start = 0;
    for(int i = 2 ; i <= sqrt(n) ; i++ ){
        while( n% i ==0 ){
            n /= i;
            start++;
            if( start == dem ){
                cout << i << endl;
                return ;
            }
        }
    }
    if( n == 1){
        cout << -1 << endl;
    }
    if( n > 1 ){
        if( start == dem - 1 ) cout << n << endl;
        else cout << -1 << endl;
    }
}
int main(){
    int t;//
    cin >> t;//
    while( t-- ){
        solve();
    }
} 
