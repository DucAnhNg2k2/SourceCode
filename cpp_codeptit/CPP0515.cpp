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
			if( s[i] >='A' && s[i] <='Z' ) 
				s[i] += 32 ;
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
string inB20DCCN(int id)
{
	string res ;
	if( id < 10 ) res = "00";
	else if( id < 100 ) res = "0";
	res += to_string(id);
	res = "B20DCCN" + res ;
	return res;
}

void nhap(SinhVien ds[],int N)
{
    for(int i = 0 ; i < N ; i++ )
	{
		scanf("\n");
        ds[i].masv = inB20DCCN(i+1); 
        getline(cin,ds[i].name);
        XuLyTen(ds[i].name);
        getline(cin,ds[i].lop);
        getline(cin,ds[i].ngaysinh);
        XuLyNgaySinh(ds[i].ngaysinh);
		cin >> ds[i].gpa;
    }
}
void in(SinhVien ds[],int N)
{
    for(int i = 0 ; i < N ; i++ )
	{
       cout << ds[i].masv << ' ';
       cout << ds[i].name ;
       cout << ds[i].lop << ' ' ;
       cout << ds[i].ngaysinh << ' ' ;
       printf("%.2lf\n",ds[i].gpa);
    }
}
bool cmp(SinhVien a,SinhVien b)
{
	return a.gpa > b.gpa ;
}
void sapxep(SinhVien ds[],int n)
{
//    for(int i = 0 ; i < n-1 ; i++ )
//    	for(int j = i+1 ; j < n ; j++ )
//    		if( ds[i].gpa < ds[j].gpa )
//  				swap(ds[i],ds[j]);
	sort(ds,ds+n,cmp);
}
int main(){
    struct SinhVien ds[50];
    int N;
    cin >> N;
    nhap(ds, N);
    sapxep(ds,N);
    in(ds, N);
    return 0;
}

