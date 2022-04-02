#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int tong(ll n){
    int sum = 0 ;
    while( n > 0 ){
        sum += n%10;
        n/=10;
    }
    return sum;
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll n;
    cin >> n;
    int sumN = tong(n);
    int sumUoc = 0;
    for(int i = 2 ; i <= sqrt(n) ; i++ ){
        while( n%i == 0 ){
            sumUoc += tong(i);
            n /=i;
        }
    }
    if( n > 1 ) sumUoc += tong(n);
    if ( sumN == sumUoc ) cout <<"YES";
    else cout << "NO";
}  
