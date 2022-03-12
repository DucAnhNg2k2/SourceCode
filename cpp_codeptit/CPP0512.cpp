#include<bits/stdc++.h>
using namespace std;
struct PhanSo{
	long long tu,mau;
}; 
void process(PhanSo a,PhanSo b){
	PhanSo C ;
	C.tu = a.tu*b.mau + b.tu*a.mau;
	C.mau = a.mau*b.mau;
	PhanSo tamthoi;
	tamthoi.tu = C.tu*C.tu;
	tamthoi.mau = C.mau*C.mau;
	long long gcd = __gcd(tamthoi.tu,tamthoi.mau);
	tamthoi.tu /= gcd;
	tamthoi.mau /= gcd ;
	PhanSo D;
	D.tu = a.tu*b.tu*tamthoi.tu;
	D.mau = a.mau*b.mau*tamthoi.mau;
	gcd = __gcd(D.tu,D.mau);
	D.tu /= gcd;
	D.mau /= gcd ;
	cout << tamthoi.tu << "/" << tamthoi.mau << ' ' << D.tu << "/" << D.mau << endl;
}
int main() {
	int t;
	cin >> t;
	while (t--) {
		PhanSo A;
		PhanSo B;
		cin >> A.tu >> A.mau >> B.tu >> B.mau;
		process(A, B);
	}
}

