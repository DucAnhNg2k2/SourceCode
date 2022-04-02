#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    int n;
    cin >> n;
    ll a[n+1];
    ll b[n+1];
    for(int i = 1 ; i <= n; i++ ) cin >> b[i];
    a[1] = b[1];
    ll sum = a[1];
    for(int i = 2 ; i <= n ; i++){
        a[i] = b[i]*i - sum;
        sum += a[i];
    }
    for(int i = 1 ; i<= n ; i++ ) cout << a[i] << ' ';
} 
