#include<bits/stdc++.h>
using namespace std;
void solve(){
    double N , L , M;
    cin >> N >> L >> M;
    // N(1+L)^x == M 
    double x = log(M/N)/log(1+L/100);
    if (x > (int)(x) ) x = (int)(x+1);
    cout << (int)x << endl;
}
int main(){
    int t;
    cin >> t;
    while( t-- ){
        solve();
    }
} 
