#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
 
int main(){
    ll n;
    cin >> n;
    int dem = 0;
    while( n > 0 ){
        int sodu = n %10;
        n /= 10;
        if( sodu == 4 || sodu == 7 ) dem++;
    }
    if( dem == 4 || dem == 7) cout <<"YES" ;
    else cout <<"NO";
} 
