#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve(){
    ll a[4];
    cin >> a[1] >> a[2] >> a[3];
    sort(a+1,a+4);
    cout << a[3] - a[2] + a[2] - a[1] << endl;
}
int main(){
    int t;
    cin >> t;
    while( t-- ){  
        solve();
    }
} 
