#include"iostream"
using namespace std;
int a[100], stop = 0, n;
// Khoi tao cho chuoi nhi phan ban dau = 0
void KhoiTao(){
	for(int i = 0 ; i < n ; i++ ){
		a[i] = 0 ;
	}
}
 
// xuat
void Xuat(){
	for(int i = 0 ; i < n ; i++){
		cout << a[i] ;
	}
	cout << endl;
}
// sinh
void Sinh(){
	int i = n-1;
	while(i>=0 && a[i]==1){
		a[i] =0;
		i--;
	}
	if(i==-1) stop=1;
	else a[i]=1;
}
void ChuongTrinh(){
	while(!stop){
		Xuat();
		Sinh();
	}
}
int main(){
	cin >> n;
	KhoiTao();
	ChuongTrinh();
} 
