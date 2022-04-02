#include<bits/stdc++.h>
using namespace std;
bool SoMM(string s){
    for(int i = 0 ; i < s.size() ; i++ ){
        if( s[i] =='4' || s[i] == '7') continue;
        else return false;
    }
    return true;
}
int main(){
    int n;
    cin >> n;
    string s;
    cin >> s;
    int sum1 = 0;
    int sum2 = 0;
    for(int i = 0 ; i < n/2 ; i++ ){
        sum1 += (int)(s[i]-'0');
    }
    for(int i = n/2; i < n ; i++ ){
        sum2 += (int)(s[i]-'0');
    }
    if( SoMM(s) && sum1== sum2) cout <<"YES";
    else cout << "NO";
} 
