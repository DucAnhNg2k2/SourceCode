#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    int n;
    cin >> n;
    ll a[n+1];
    ll s[n+1][n+1];
    for(int i = 1 ; i <= n ; i++ ){
        for(int j = 1 ; j <= n ; j++ ){
                cin >> s[i][j];
        }
    }
    a[2] = (s[1][2]+s[2][3]-s[1][3])/2;
    a[1] = s[1][2] - a[2];
    for(int i = 3 ; i <= n ; i++ ){
        a[i] = s[i-1][i] - a[i-1];
    }
    for(int i = 1 ; i <=n ; i++ ){
        cout << a[i] << ' ';
    }
} 
