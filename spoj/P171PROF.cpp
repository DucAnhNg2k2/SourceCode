#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    ll a[n];
    for(int i = 0 ; i < n ; i++ ) cin >> a[i];
    sort(a,a+n);
    ll dem = 1 ;
    ll sum = a[0];
    for(int i = 1 ; i< n ; i++ ){
        if( a[i] >= sum ){
            dem++;
            sum += a[i];
        }
    }
    cout << dem;
} 
