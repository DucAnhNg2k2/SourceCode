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
void in(PhanSo p)
{
	cout << p.tu_so << '/' << p.mau_so ;
}
int main() {
	struct PhanSo p;
	nhap(p);
	rutgon(p);
	in(p);
	return 0;
}
