#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    cin.ignore();
    while( t-- ){
        string s;
        getline(cin,s);
        if( s=="dung") cout << 2;
        else if( s=="lon hon") cout << 1;
        else cout << 3;
        cout <<'\n';
    }
} 
