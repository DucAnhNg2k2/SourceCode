#include <iostream>
#include <math.h>
 
using namespace std;
 
int main() {
	long long xi,yi,xw,yw,r;
	cin >> r >> xi >> yi >> xw >> yw ;
	double h = sqrt( pow(xi-xw,2) + pow(yi-yw,2) );
	if( h==0){
		cout << 0 ;
		return 0;
	}
	else{
		long long H = (long long)(h);
		long long R = 2*r;
		if( H == h){
			if( H%R==0){
				cout << H/R;
			}
			else{
				cout<<H/R +1;
			}
		}
		else{
			cout << H/R +1;
		}
	}
} 
