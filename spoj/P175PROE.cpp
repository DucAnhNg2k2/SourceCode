#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int demcs(ll n){
    int dem = 0 ;
    while( n > 0 ){
        n /=10;
        dem++;
    }
    return dem;
}
int tong(ll n){
    int sum = 0 ;
    while( n > 0 ){
        sum += n%10;
        n/=10;
    }
    return sum;
}
int main(){
    string s;
    cin >> s;
    ll sum = 0;
    int dem = 0 ;
    if( s.length() == 1 ){
        cout << dem ;
        return 0;
    }
    for(int i = 0 ; i < s.length() ; i++ ){
        sum += (int)(s[i]-'0');
    }
    dem++;
    while( demcs(sum) > 1 ){
        sum = tong(sum);
        dem++;
    }
    cout << dem;
} 
