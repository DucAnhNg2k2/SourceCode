#include<bits/stdc++.h>
using namespace std;
bool checkArr(int a[],int n){
	int test = a[0];
	for(int i = 1 ; i < n ; i++ ){
		if( a[i]!=test) return false;
	}
	return true;
}
void print(int a[],int n){
	for(int i = 0 ; i < n ;i++ ){
		cout << a[i] << ' ';
	}
	cout << endl;
}
int cs = 1;
void solve(int n){
	int a[n];
	for(int i = 0 ; i < n ; i++ ){
		cin >> a[i];
	}
	int dem = 0 ;
	cout << "Case " << cs << ": ";
	cs++;
	while( checkArr(a,n) == false){
		int danhdau = a[0];
		for(int i = 0 ; i < n-1; i++){
			a[i] =abs(a[i]-a[i+1]);
		}
		a[n-1] = abs(a[n-1] - danhdau);
		dem++;
		if( dem > 1000 ){
			cout << "not attained" << endl;
			return ;
		}
	}
	cout << dem << " " << "iterations" << endl;
}
int main(){
	while( true ){
		int n;
		cin >> n;
		if( n== 0 ) return 0;
		solve(n);
	}
}
