#include<iostream>
#include<math.h>
using namespace std;
typedef long long ll;
int main(){
	int n, k;
	cin >> n >> k;
	int a[n+1];
	int demD = 0;
	int demT = 0;
	for(int i = 1 ; i <= n; i++ ){
		cin >> a[i]; 
		if( a[i] == -1 ) demT++;
		else demD++;
	}
	int max = 0;
	for(int i = 1 ; i <= n ; i++){
		int anD = 0 ;
		int anT = 0 ;
		int b = i;
		for(int j = (1 -b)*1.0/k ; b+j*k <= n ; j++){
			int c = b+j*k;
			if( a[c] == -1 ) anT++;
			else anD++;
		}
		int Ddu = demD - anD;
		int Tdu = demT - anT;
		if( max < abs(Ddu - Tdu ) ) max = abs(Ddu - Tdu);
	}
	cout << max ;
} 
