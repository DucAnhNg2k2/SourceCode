#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin >> n;
    vector<bool> a(n+1,1);
    for( int i = 2 ; i<= n ; i++ ){
        for(int j = i ; j <= n ; j+=i){
            if( a[j] ) a[j] = false;
            else a[j] = true;
        }
    }
    int dem = 0;
    for(int i = 1 ; i <= n ; i++ ){
        if( a[i] ) dem++;
    }
    cout << dem << endl;
}
int main(){
    int t;
    cin >> t;
    while( t-- ){
        solve();
    }
} 
