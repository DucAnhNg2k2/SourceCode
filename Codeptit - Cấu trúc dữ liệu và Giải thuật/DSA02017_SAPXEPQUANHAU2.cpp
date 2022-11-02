// xep N quan hau
#include <bits/stdc++.h>
using namespace std;
int n = 8, b[10][10] = {0} , ans = 0,a[10][10];
// xuat mang
void Xuat(){
	for(int i = 0 ; i < n ; i++ ){
		for(int j = 0 ; j < n ; j++){
			cout << b[i][j] << " ";
		}
		cout << endl;
	}
	cout << endl;
}
// ham kiem tra xem co an nhau khong
bool IsOk(int hang,int cot){
	// kiem tra hang ngang
	for(int i =0 ; i < cot ; i++){
		if( b[hang][i] ) return false;
	}
	// kiem tra cheo tren
	int i = hang , j = cot;
	while( i>=0 && j>=0 ){
		if( b[i][j] ) return false;
		i--;
		j--;
	}
	// kiem tra cheo duoi
	 i = hang, j = cot;
	while( i < n && j >=0 ){
		if( b[i][j] ) return false;
		i++;
		j--;
	}
	return true;
}
// quay lui thu tat ca truong hop
void Try(int cot,int sum){
	for(int i = 0 ; i < n ; i++ ){
		if( IsOk(i,cot)){
			b[i][cot] = 1; // dat hau 
			sum += a[i][cot];
			if( cot == n-1 ){
			//	Xuat();
				ans = max(ans,sum);
			}
			else Try(cot+1,sum);
			b[i][cot] = 0;	
			sum -= a[i][cot];
		}
	}
}
int main(){
	int t;
	cin >> t;
	while( t-- ) {
		for(int i = 0 ; i <= 9 ; i++ ) {
			for(int j = 0 ; j <= 9 ; j++ ) {
				b[i][j] = false;
			}
		}
		for(int i = 0 ; i <= 7 ; i++ ) {
			for(int j = 0 ; j <= 7 ; j++ ) {
				cin >> a[i][j];
			}
		}
		ans = 0;
		Try(0,0);
		cout << ans  << endl;
	}
} 
