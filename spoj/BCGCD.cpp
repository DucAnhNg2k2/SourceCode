#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll UCLN(ll a,ll b){
    while( a*b!=0 ){
        if( a> b) a %= b;
        else b%=a;
    }
    return a+b;
}
ll BCNN(ll a ,ll b){
    return (a*b)/UCLN(a,b);
}
int main(){
   while(true){
       ll a,b;
       cin >> a >> b;
       if( a== 0 && b==0) break;
       cout << UCLN(a,b) <<" "<<BCNN(a,b) << endl;
   }
} 
