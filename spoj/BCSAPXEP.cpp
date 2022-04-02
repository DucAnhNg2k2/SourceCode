#include <bits/stdc++.h>
using namespace std;
void QuickSort(long long a[],int l ,int r){
	int i = l;
	int j = r;
	long long p = a[(l+r)/2];
	while( i < j){
		while(a[i] < p ) i++;
		while(a[j] > p) j--;
		if(i<=j){
			long long t = a[i];
			a[i] = a[j];
			a[j] = t;
			i++;
			j--;
		}
	}
	if(i < r) QuickSort(a,i,r);
	if(j > l) QuickSort(a,l,j);
}
int main(){
	int n;
	cin >> n;
	long long a[n];
	for(int i = 0 ; i < n ; i++ ){
		cin >> a[i];
	}
	QuickSort(a,0,n-1);
	for(int i = 0 ; i < n ; i++){
		cout << a[i] << endl;
	}
} 
