// sinh hoan vi
#include"iostream"
using namespace std;
int a[100], n , stop = 1;
void QuickSort(int a[],int l ,int r){
	int i = l;
	int j = r;
	int p = a[(l+r)/2];
	while( i < j){
		while(a[i] < p ) i++;
		while(a[j] > p) j--;
		if(i<=j){
			swap(a[i],a[j]);
			i++;
			j--;
		}
	}
	if(i < r) QuickSort(a,i,r);
	if(j > l) QuickSort(a,l,j);
}
void KhoiTao(){
	for(int i = 1 ; i <= n ; i++){
		a[i] = i ;
	}
}
void Xuat(){
	for(int i = 1 ; i <= n ; i++ ){
		cout << a[i] ;
	}
	cout << endl;
}
void Sinh(){
	int i = n - 1;
	while( i>0 && a[i] > a[i+1]){
		i--;
	}
	if(i==0) stop = 0;
	else{
		int j = n;
		while( a[i] > a[j] ){
			j--;
		}
		swap(a[i],a[j]);
		QuickSort(a,i+1,n);
	}
}
void ChuongTrinh(){
	while(stop){
		Xuat();
		Sinh();
	}
}
int main(){
	cin >> n;
	KhoiTao();
	ChuongTrinh();
} 
