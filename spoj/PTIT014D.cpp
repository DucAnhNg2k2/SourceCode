#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int solve(){
    string s;
    cin >> s;
    if( s.length() == 1 && s[0] =='0' ) return 0;
    ll sum = 0 ;
    for(int i = 0 ; i < s.length() ; i++ ){
        sum += (int)(s[i]-'0');
    }
    if( sum%9 == 0 ) return 1;
    else return 0;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while( t-- ){
        cout << solve() << endl;
    }
} 
