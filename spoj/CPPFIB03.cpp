#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int n;
ll fibo[17];
bool sfibo(int a){
    for(int j = 0 ; j < 17 ; j++ ){
            if( a == fibo[j] ) return true; 
        }
    return false;
}
void solve(){
    cin >> n;
    int a[n];
    for(int i = 0 ; i < n ; i++ ) cin >> a[i];
    for(int i = 0 ; i < n ; i++ ){
        if( sfibo( a[i] ) ) cout << a[i] << ' ';
    }
    cout << endl;
}
int main(){
    fibo[0] = 0;
    fibo[1] = 1;
    for(int i = 2 ; i < 17 ; i++ ){
        fibo[i] = fibo[i-1] + fibo[i-2];
    }
    int t;
    cin >> t;
    while( t-- ){
        solve();
    }
} 
