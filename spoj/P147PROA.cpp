#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    ll A,B,C;
    cin >> A >> B >> C;
    // a*b = A
    // a*c = B
    // b*c = C
 
    // --> a*a*b*c = A*B = a*a*C
    // --> a*a = A*B/C
 
    double a = sqrt(A*B*1.0/C);
    double b = A*1.0/a;
    double c = B*1.0/a;
    cout << 4*(a+b+c);
} 
