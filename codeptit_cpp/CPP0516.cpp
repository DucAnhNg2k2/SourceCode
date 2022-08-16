#include<bits/stdc++.h>
using namespace std;
struct MatHang{
    string ten;
    string loai;
    double giamua;
    double giaban;
    int id;
};
void nhap1mathang(MatHang &a){
    getline(cin,a.ten);
    getline(cin,a.loai);
    cin>>a.giamua;
    cin>>a.giaban;
}
void nhap(MatHang ds[],int N){
    for(int i=0;i<N;i++){ 
        ds[i].id=i+1;
        nhap1mathang(ds[i]);
        cin.ignore() ;
    }
}
bool cmp(MatHang a,MatHang b){
    return a.giaban-a.giamua>b.giaban-b.giamua;
}
void in(MatHang ds[],int N){
    for(int i=0;i<N;i++){
        cout<<ds[i].id<<" "<<ds[i].ten<<" "<<ds[i].loai<<" ";
        printf("%.2lf\n",ds[i].giaban-ds[i].giamua);
    }
}
int main(){
    MatHang ds[50];
    int N;
    cin >> N;
    cin.ignore();
    nhap(ds, N);
    sort(ds,ds+N,cmp);
    in(ds, N);
    return 0;
}
