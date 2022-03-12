#include<bits/stdc++.h>
using namespace std;

struct SinhVien
{
	string ten,lop,ngaysinh;
	double GPA;
};
void nhap(SinhVien &a)
{
	getline(cin,a.ten);
	getline(cin,a.lop);
	getline(cin,a.ngaysinh);
	cin >> a.GPA ;
	string res = a.ngaysinh ;
	if( res[1] < '0' || res[1] > '9' ) res = '0' + res ;
	if( res[4] < '0' || res[4] > '9' ) res.insert(3,"0");
	while( res.size() != 10 ) res.insert(6,"0");
	a.ngaysinh = res ;
}
void in(SinhVien a)
{
	cout << "B20DCCN001" << ' ' << a.ten << ' ' << a.lop << ' ' << a.ngaysinh << ' ';
	printf("%.2lf",a.GPA);
}
int main(){
    struct SinhVien a;
    nhap(a);
    in(a);
    return 0;
}
