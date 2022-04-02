#include<bits/stdc++.h>
using namespace std;
string to__string(int n){
    string s ="";
    while( n > 0 ){
        s = (char)(n%10+'0') + s;
        n /= 10;
    }
    return s;
}
int main(){
    int t;
    cin >> t;
    while(t--){
    string s;
    cin >> s;
    int dem = 1;
    string res ="";
    for(int i = 0 ; i < s.length() -1 ; i++ ){
        if( s[i] == s[i+1] ) dem++;
        else{
            res += to__string(dem) + s[i];
            dem = 1;
        }
    }
    res += to__string(dem) + s[s.length()-1];
    cout << res << endl;
    }
} 
