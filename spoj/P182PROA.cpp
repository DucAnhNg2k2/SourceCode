#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    ll c, vo, v1, a , l;
    cin >> c >> vo >> v1 >> a >> l;
    int dem = 0;
    while(true){
        c -= vo;
        dem++;
        if( vo + a <= v1 ) vo += a;
        else vo = v1;
        if( c <= 0 ) break;
        c += l;
    }
    cout << dem;
} 
