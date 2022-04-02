#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    int t;
    cin >> t;
    int test = 1;
    while( t-- ){
        int a ,b;
        cin >> a >> b;
        string s;
        cin >> s;
        cout << test << ' ';
        test++;
        for(int i = 0 ; i < s.length() ; i++ ){
            for(int j = 1 ; j <= b ; j++ ){
                cout << s[i] ;
            }
        }
        cout << endl;
    }
} 
