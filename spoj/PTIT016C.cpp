#include<bits/stdc++.h>
using namespace std;
void solve(){
    string s;
    cin >> s;
    s = '@' + s;
    for(int i = 1 ; i < s.length() ; i++ ){
        int t = (int)(s[i]-'0');
        if( i%2 == 0 && t%2==1 ){
            cout << "NO";
            return ;
        }
        if( i%2 == 1 && t%2==0 ){
            cout <<"NO";
            return ;
        }
    }
    cout << "YES";
}
int main(){
    int t;
    cin >> t;
    while( t-- ){
        solve();
        cout << endl;
    }
} 
