#include<iostream>
using namespace std;
int k = 3, n, a[1000] , b[1000], stop = 1;
	long long M;
void KhoiTao(){
	for(int i = 1 ; i<= k ; i++ ) a[i] = i;
}
void Xuat(){
	for(int i = 1 ; i<= k ; i++ ) cout << a[i];
	cout << endl;
}
void Sinh(){
	int i = k;
	while( i > 0 && a[i] ==n+i-k){
		i--;
	}
	if( i==0 ) stop = 0;
	else{
		a[i]++;
		int p = a[i];
		while( i <=k ){
			a[i++] = p++;
		}
	}
}
long long Tong(){
	long long s = 0;
	for(int i = 1; i <= k ; i++){
		s += b[a[i]];
	}
	return s;
}
long long ChuongTrinh(){
	long long MAX = 0;
	while(stop){
		if( MAX <= Tong() && Tong() <= M ) MAX = Tong();
		Sinh();
	}
	return MAX;
}
int main(){
	int t;
	cin >> t;
	while( t--){
		cin >> n >> M ;
		for(int i = 1 ; i<= n ; i++ ) cin >> b[i];
		KhoiTao();
		cout << ChuongTrinh() << endl;
		stop = 1;
	}
} 
