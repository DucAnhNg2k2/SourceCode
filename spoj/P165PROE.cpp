#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
struct Bt{
    int diem;
    int b;
};
bool check(Bt a,Bt b){
    return a.b < b.b;
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll n,Max,TB;
    cin >> n >> Max >> TB;
    Bt bt[n];
    ll DiemHienTai = 0 ;
    for(int i = 0 ; i < n ; i++ ){
        cin >> bt[i].diem >> bt[i].b;
        DiemHienTai += bt[i].diem;
    }
    ll soDiemCanCaiThien = TB*n - DiemHienTai;
    if( soDiemCanCaiThien <= 0 ){
    	cout << 0 ;
    	return 0;
	}
   	sort(bt,bt+n,check);
   	ll dem = 0;
   	for(int i = 0 ; i < n ; i++ ){
   		ll canlam = soDiemCanCaiThien;
   		ll chicothelam = Max - bt[i].diem;
   		ll t = min(canlam,chicothelam);
   		dem += t*bt[i].b;
   		soDiemCanCaiThien -= t;
   		if( soDiemCanCaiThien <= 0 ) break;
	}
	cout << dem;
} 
