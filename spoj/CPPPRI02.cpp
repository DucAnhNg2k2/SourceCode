#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve(){
    ll n;
    cin >> n;
    ll max = 0;
    for(int i = 2 ; i <= sqrt(n) ; i++ ){
        while( n%i == 0 ){
            n/=i;
            if( max < i ) max =i;
        }
    }
    if( n > 1 ){
        if (max < n ) max = n;
    }
    cout << max << endl;
}
int main(){
    int t;
    cin >> t;
    while( t-- ){
        solve();
    }
}  
