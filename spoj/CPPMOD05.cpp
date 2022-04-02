#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
long long solve(){
    string s;
    cin >> s;
    ll m;
    cin >> m;
    ll sum = 0 ;
    for(int i = 0 ; i < s.length() ; i++ ){
        sum = sum*10 + (int)(s[i]-'0');
        sum %= m;
    }
    return sum;
}
int main(){
    int t;
    cin >> t;
    while( t-- ){
        cout << solve() << endl;
    }
} 
