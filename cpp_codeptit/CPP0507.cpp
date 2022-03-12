#include<bits/stdc++.h>
using namespace std;
struct PhanSo
{
	long long tu_so , mau_so ;
};
void nhap(PhanSo &p)
{
	cin >> p.tu_so >> p.mau_so ;
}
void rutgon(PhanSo &p)
{
	long long gcd = __gcd(p.tu_so,p.mau_so);
	p.tu_so /= gcd ;
	p.mau_so /= gcd ;
}
PhanSo tong(PhanSo p,PhanSo q)
{
	PhanSo t ;
	t.tu_so = p.tu_so*q.mau_so + q.tu_so*p.mau_so ;
	t.mau_so = p.mau_so*q.mau_so ;
	rutgon(t);
	return t;
}
void in(PhanSo p)
{
	cout << p.tu_so << '/' << p.mau_so ;
}
int main() {
	struct PhanSo p,q;
	nhap(p); nhap(q);
	PhanSo t = tong(p,q);
	in(t);
	return 0;
}
