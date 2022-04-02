#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
bool IsPrime(ll n){
    if( n < 2 ) return false;
    for(int i = 2 ; i <= sqrt(n) ; i++ )
    {
        if( n%i == 0) return false;
    }
    return true;
}
main(){
    while(true){
    string s;
    cin >> s;
    if( s.length() == 1 && s[0] =='0') return 0;
    int max = INT_MIN;
    int n = s.length();
    ll a[n];
    for(int i = 0 ; i < n ; i++ ){
        a[i] = (int)(s[i]-'0');
    }
    for(int i = 0 ; i < n ; i++ ){
        ll sum = a[i];
        if( IsPrime(sum) ) if( max < sum ) max =sum;
        for(int j = i+1 ; j < n ; j++ ){
            sum = sum*10 + a[j];
            if( IsPrime(sum) ){
                if( max < sum && sum >= 2 && sum <= 100000) max = sum;
            }
        }
    }
    cout << max << endl;
    }
} 
