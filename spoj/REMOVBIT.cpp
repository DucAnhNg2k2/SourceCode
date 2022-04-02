#include<bits/stdc++.h>
using namespace std;
int main(){
    string a;
    cin >> a;
    bool check = false;
    for(int i = 0 ; i < a.length() ; i++ ){
        if( a[i]=='0'){
            a.erase(i,1);
            check =true;
            break;
        }
    }
    if( check ){
        cout << a;
    }
    else{
        for(int i = 0 ; i < a.length()-1 ;i++){
            cout << a[i];
        }
    }
} 
