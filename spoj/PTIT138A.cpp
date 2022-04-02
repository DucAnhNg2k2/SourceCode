#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    while(true){
        long long a,b,c;
        cin >> a >> b >> c;
        if( a==0 && b==0 && c == 0) return 0;
        bool ok = false;
        if( a*a + b*b == c*c ) ok = true;
        if( a*a + c*c == b*b ) ok = true;
        if( b*b + c*c == a*a ) ok = true;
        if( ok ) cout << "right" << endl;
        else cout << "wrong" << endl;
    }
} 
