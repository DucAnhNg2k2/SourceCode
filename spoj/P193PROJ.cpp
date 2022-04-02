#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    ll a[3];
    cin >> a[1] >> a[2];
    sort(a+1,a+3);
    ll b[4];
    cin >> b[1] >> b[2] >> b[3];
    sort(b+1,b+4);
    if( b[1]*b[1] + b[2]*b[2] != b[3]*b[3] ){
        cout << "NO";
        return 0;
    }
    else
    {
        if( b[1] <= a[1] && b[2] <= a[2] ) cout <<"YES";
        else cout <<"NO";
    }
} 
