#include<bits/stdc++.h>
// do chua = tich
// do cay = tong
using namespace std;
int a[10] , b[10] , c[10], stop = 1 ;
int n;
void KhoiTao(){
	for(int i = 0 ; i < n ; i++ ) a[i] = 0;
}
void Sinh(){
	int i = n -1;
	while( i>= 0 && a[i]==1){
		a[i] = 0;
		i--;
	}
	if(i==-1) stop =0;
	else{
		a[i] = 1;
	}
}
long long ChenhLech(){
	long long chua = 1;
	long long cay = 0;
	for(int i = 0 ; i < n ; i++ ){
		if( a[i]==1){
			chua *= b[i];
			cay +=c[i];
		}
	}
	return abs(chua-cay);
}
long long ChuongTrinh(){
	long long min = 1e10;
	while(stop){
		if ( min > ChenhLech() ) min = ChenhLech();
		Sinh();
	}
	return min;
}
int main(){
	cin >> n;
	for(int i = 0 ; i < n ; i++ ){
		cin >> b[i]; // do chua
		cin >> c[i]; // do cay
	}
	KhoiTao();
	Sinh();
	cout << ChuongTrinh();
} 
