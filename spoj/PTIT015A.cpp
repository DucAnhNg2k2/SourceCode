#include<bits/stdc++.h>
using namespace std;
void solve(){
    string s1,s2,s3;
    cin >> s1 >> s2 >> s3;
    vector<int> a(10,0);
    for(int i = 0 ; i < s1.length() ; i++ ){
        a[(int)(s1[i]-'0')]++;
    }
    for(int i = 0 ; i < s2.length() ; i++ ){
        a[(int)(s2[i]-'0')]++;
    }
    for(int i = 0 ; i < s3.length() ; i++ ){
        a[(int)(s3[i]-'0')]++;
    }
    for(int i = 9 ; i >=0 ; i-- ){
        while( a[i] > 0 ){
            cout << i ;
            a[i]--;
        }
    }
    cout << endl;
}
int main(){
    int t;
    cin >> t;
    while( t-- ){
        solve();
    }
} 
