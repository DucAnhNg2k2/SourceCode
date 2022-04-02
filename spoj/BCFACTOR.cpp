#include "iostream"
#include "math.h"
using namespace std;
int main(){
	long long n;
	cin >> n;
	for(int i = 2 ; i<=sqrt(n);i++){
		int dem = 0;
		while(n%i==0){
			n /=i;
			dem++;
		}
		if(dem){
			cout << i << " " << dem << endl;
		}
	}
	if( n>1) cout << n <<" " << 1 << endl;
} 
