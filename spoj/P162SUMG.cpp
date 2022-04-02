#include<bits/stdc++.h>
using namespace std;
int main(){
	string n;
	getline(cin,n);
	int demt = 0 , demh = 0;
	for(int i = 0 ; i < n.length() ; i++ ){
		if( n[i] <='Z' && n[i] >='A') demh++;
		else demt++;
	}
	if( demt >= demh ){
		for(int i = 0 ; i < n.length() ;i++){
			if( n[i] <='Z' && n[i] >='A' ) n[i]+=32;
		}
		cout << n;
	}
	else{
		for(int i = 0 ; i < n.length() ;i++){
			if( n[i] <='z' && n[i] >='a' ) n[i]-=32;
		}
		cout << n;
	}
} 
