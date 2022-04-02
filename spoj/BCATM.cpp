#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll n,s;
ll csMin = 1000 ;
ll a[25];
ll b[25];
void Check(){
    ll sum = 0 ;
    int dem = 0 ;
    for(int i = 1 ; i <= n ; i++ ){
        if( a[i] ){
            sum +=b[i];
            dem++;
        }
    }
    if( sum == s && csMin > dem ) csMin = dem;
}
void Try(int i){
    for(int j = 0 ; j <= 1 ; j++ ){
        a[i] = j;
        if( i== n ) Check();
        else Try(i+1);
    }
}
int main(){
    cin >> n >> s;
    for(int i = 1 ; i<= n ; i++ ){
        cin >> b[i];
    }
    Try(1);
    if( csMin == 1000 ){
        cout << -1;
    }
    else cout << csMin;
} 
