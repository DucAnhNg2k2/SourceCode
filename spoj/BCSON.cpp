#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll a[10000][10000] = {0};
int main(){
    int m ,n;
    cin >> m >> n;
    for(int i = 1 ; i <= m ; i++ ){
        for(int j = 1 ; j <= n ; j++ ){
            cin >> a[i][j];
        }
    }
    ll s = m*n;
    for(int i = 1 ; i <= m ; i++ ){
        for(int j = 1 ; j <=n ; j++ ){
           if(a[i][j]>a[i-1][j]) s+=(a[i][j]-a[i-1][j]);   //vi tri tren
           if(a[i][j]>a[i+1][j]) s+=(a[i][j]-a[i+1][j]);   //vi tri duoi
           if(a[i][j]>a[i][j-1]) s+=(a[i][j]-a[i][j-1]);   //vi tri trai
           if(a[i][j]>a[i][j+1]) s+=(a[i][j]-a[i][j+1]);   //vi tri phai
        }
    }
    cout << s;
} 
