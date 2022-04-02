#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    int dem = 0 ;
    while( n-- ){
        string s;
        cin >> s;
        if( s[1] == '+') dem++;
        else dem --;
    }
    cout << dem;
} 
