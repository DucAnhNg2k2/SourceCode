#include<bits/stdc++.h>
using namespace std;
void solve(){
    double A,B,C;
    cin >> A >> B >> C ;
    double a = sqrt(A*B/C);
    double b = A/a;
    double c = C/b;
    cout << 2*(a+b+a+b+c+c) << endl;
}
int main(){
    int t;
    cin >> t;
    while( t-- ){
        solve();
    }
} 
