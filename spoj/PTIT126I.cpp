#include <iostream>
using namespace std;
int main(){
	string a,b;
	cin >> a >> b;
	int danhdau1 ,danhdau2 , ok = 0;
	for(int i = 0 ; i < a.length() ; i++ ){
		for(int j = 0 ; j < b.length() ; j++ ){
			// b.find( a[i] ) != -1
			if ( a[i] == b[j]){
				danhdau1 = i ;
				danhdau2 = j ;
				ok = 1 ;
				break;
			}
		}
		if( ok == 1 ) break;
	}
	
	for(int i = 0 ; i < danhdau2 ; i++ ){
		for(int j = 0 ; j < danhdau1 ; j++ ) cout<<".";
		cout << b[i] ;
		for(int j = danhdau1 +1 ; j < a.length() ; j++ ) cout <<".";
		cout << endl;
	}
	cout << a << "\n";
	for(int i = danhdau2 +1 ; i < b.length() ; i++ ){
		for(int j = 0 ; j < danhdau1 ; j++ ) cout<<".";
		cout << b[i] ;
		for(int j = danhdau1 +1 ; j < a.length() ; j++ ) cout <<".";
		cout << endl;
	}
} 
