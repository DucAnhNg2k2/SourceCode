// xep N quan hau
#include <bits/stdc++.h>
using namespace std;
int n , b[10][10] = {0} , dem = 0;
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
void Try(int cot){
	for(int i = 0 ; i < n ; i++ ){
		if( IsOk(i,cot)){
			b[i][cot] = 1; // dat hau 
			if( cot == n-1 ){
			//	Xuat();
				dem ++;
			}
			else Try(cot+1);
			b[i][cot] = 0;	
		}
	}
}
int main(){
	cin >> n;
	Try(0);
	cout << dem ;
} 
