#include<bits/stdc++.h>
using namespace std;
struct Car{
    int den;
    int di;
};
int main(){
	
    Car c[4];
    int A,B,C;
    cin >> A >> B >> C;
    for(int i = 1 ; i <= 3 ; i++ ){
    	cin >> c[i].den >> c[i].di;
	}
	
	int sum = 0 ;
	
	int BEGIN = min(c[1].den,min(c[2].den,c[3].den));
	int END  = max(c[1].di,max(c[2].di,c[3].di));
	
	for(double i = BEGIN+0.5 ; i <= END ; i++ ){
		
		int dem = 0 ;
		if( c[1].den < i && i < c[1].di ) dem++;
		if( c[2].den < i && i < c[2].di ) dem++;
		if( c[3].den < i && i < c[3].di ) dem++;
		if( dem == 1 ) sum += A;
		if( dem == 2 ) sum += 2*B;
		if( dem == 3 ) sum += 3*C;
	}
	cout << sum ;
}
 
