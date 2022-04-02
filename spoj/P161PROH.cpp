#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin >> n;
	vector<bool> b(3005,true);
	int a[n];
	for(int i = 0 ; i < n ; i++ ){
		cin >> a[i];
		b[a[i]] = false;
	}
	for(int i = 1 ; i < 3005 ; i++){
		if( b[i] == true ){
			cout << i;
			break;
		}
	}
} 
