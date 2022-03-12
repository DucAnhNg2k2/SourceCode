#include<bits/stdc++.h>
using namespace std;

struct SinhVien
{
    string masv,name,lop,ngaysinh;
    double gpa;
};
void XuLyTen(string &s)
{
	vector<string> name;
	stringstream ss;
	ss << s;
	while( ss >> s )
	{
		for(int i = 0 ; i < s.size() ; i++ )
		{
			if( s[i] >='A' && s[i] <='Z' ) s[i] += 32 ;
		}
		s[0] -= 32 ;
		name.push_back(s);
	}
	string res = "";
	for(int i = 0 ; i < name.size() ; i++ ) res = res + name[i] + " " ;
	s = res ;
}
void XuLyNgaySinh(string &s)
{
	// 00/00/0000
	if( s[2] != '/' ) s = '0' + s;
    if( s[5] != '/' ) s.insert(3,"0");
    while( s.size() != 10 ) s.insert(6,"0");
}
void inB20DCCN(int id)
{
	string res ;
	if( id < 10 ) res = "00";
	else if( id < 100 ) res = "0";
	res += to_string(id);
	res = "B20DCCN" + res ;
	cout << res << ' ' ;
}
void nhap1sv(SinhVien &a){
	cin.ignore();
    getline(cin,a.name);
    XuLyTen(a.name);
    getline(cin,a.lop);
    getline(cin,a.ngaysinh);
	XuLyNgaySinh(a.ngaysinh);
    cin >> a.gpa ;
}
void nhap(SinhVien ds[],int N){
    for(int i=0;i<N;i++){ 
        nhap1sv(ds[i]);
    }
}


void in(SinhVien ds[],int N){
    for(int i=0;i<N;i++)
	{
       inB20DCCN(i+1) ;
       cout << ds[i].name ;
       cout << ds[i].lop << ' ' ;
       cout << ds[i].ngaysinh << ' ' ;
       printf("%.2lf\n",ds[i].gpa);
    }
}
int main(){
    struct SinhVien ds[50];
    int N;
    cin >> N;
    nhap(ds, N);
    in(ds, N);
    return 0;
}

