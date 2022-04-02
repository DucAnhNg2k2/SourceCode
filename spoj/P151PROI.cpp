#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int demCs(ll n){
    int dem = 0 ;
    while( n > 0 ){
        n /= 10;
        dem++;
    }
    return dem;
}
int sumCs(ll n){
    int sum = 0 ;
    while( n > 0 ){
        sum += n%10;
        n/=10;
    }
    return sum;
}
int main(){
    int t;
    cin >> t;
    while( t-- ){
        ll n;
        cin >> n;
        while( demCs(n) > 1 ){
            n = sumCs(n);
        }
        cout << n << endl;
    }
} 
