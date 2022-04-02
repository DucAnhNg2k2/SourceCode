#include<bits/stdc++.h>
using namespace std;
int main(){
    while(true){
        int n;
        cin >> n;
        if( n== 0 ) break;
	int dem = 1;
	while(true){
	if( n%2==0 && n!=1){
		n =n/2 ;
		dem++;
		continue;
	}
	if( n%2 == 1 && n!=1){
		n = n*3 +1;
		dem++;
		continue;
	}
	if( n==1 ){
		cout << dem << endl;
		break;
	}
	}
    }
} 
