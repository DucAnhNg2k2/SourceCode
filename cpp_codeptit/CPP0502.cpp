#include<bits/stdc++.h>
using namespace std;

struct ThiSinh
{
    string name;
    string ngaysinh;
    double diem[3] ;
};
void nhap(ThiSinh &a)
{
    getline(cin,a.name);
    getline(cin,a.ngaysinh);
    for(int i  = 0 ; i < 3 ; i++ ) cin >> a.diem[i];
}
void in(ThiSinh a)
{
    double sum =  0;
    for(int i = 0 ; i< 3 ; i++ ) sum += a.diem[i];
    cout << a.name << ' ' << a.ngaysinh << ' ' ;
    printf("%.1lf",sum);
}
int main(){
    struct ThiSinh A;
    nhap(A);
    in(A);
    return 0;
}
