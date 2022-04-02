#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin >> s;
    int dem = 0;
    int sum = 0;
    for(int i = 0 ; i < s.length() -1 ; i++ ){
        if( s[i] =='(' && s[i+1] =='(' ) dem++;
        if( s[i] ==')' && s[i+1] ==')' ) sum += dem;
    }
    cout << sum;
} 
