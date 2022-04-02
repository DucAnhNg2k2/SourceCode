#include<bits/stdc++.h>
using namespace std;
void solve(string s){
 
    int dem = 0;
    for(int i = 0 ; i <= 37 ;i++ ){
        string test ="";
        test +=s[i];
        test +=s[i+1];
        test +=s[i+2];
        if( test =="TTT") dem++;
    }
    cout << dem << ' ';
 
    dem = 0;
    for(int i = 0 ; i <= 37 ;i++ ){
        string test ="";
        test +=s[i];
        test +=s[i+1];
        test +=s[i+2];
        if( test =="TTH") dem++;
    }
    cout << dem << ' ';
 
   dem = 0;
    for(int i = 0 ; i <= 37 ;i++ ){
        string test ="";
        test +=s[i];
        test +=s[i+1];
        test +=s[i+2];
        if( test =="THT") dem++;
    }
    cout << dem << ' ';
 
    dem = 0;
    for(int i = 0 ; i <= 37 ;i++ ){
        string test ="";
        test +=s[i];
        test +=s[i+1];
        test +=s[i+2];
        if( test =="THH") dem++;
    }
    cout << dem << ' ';
 
    dem = 0;
    for(int i = 0 ; i <= 37 ;i++ ){
        string test ="";
        test +=s[i];
        test +=s[i+1];
        test +=s[i+2];
        if( test =="HTT") dem++;
    }
    cout << dem << ' ';
 
    dem = 0;
    for(int i = 0 ; i <= 37 ;i++ ){
        string test ="";
        test +=s[i];
        test +=s[i+1];
        test +=s[i+2];
        if( test =="HTH") dem++;
    }
    cout << dem << ' ';
 
    dem = 0;
    for(int i = 0 ; i <= 37 ;i++ ){
        string test ="";
        test +=s[i];
        test +=s[i+1];
        test +=s[i+2];
        if( test =="HHT") dem++;
    }
    cout << dem << ' ';
 
    dem = 0;
    for(int i = 0 ; i <= 37 ;i++ ){
        string test ="";
        test +=s[i];
        test +=s[i+1];
        test +=s[i+2];
        if( test =="HHH") dem++;
    }
    cout << dem << ' ';
}
int main(){
    int t;
    cin >> t;
    while( t-- ){
    	int test;
    	cin >> test;
        string s;
        cin >> s;
        cout << test <<' ';
        solve(s);
        cout << endl;
    }
} 
