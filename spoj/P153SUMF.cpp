#include<bits/stdc++.h>
using namespace std;
main(){
	int n;
	cin >> n;
	string s;
	cin >> s;
	for(int i = 0 ; i < s.length() ; i++ ){
		if( s[i] >='A' && s[i] <='Z') s[i] +=32;
	}
	vector<int> b(300,0);
	for(int i = 0 ; i< s.length() ; i++ ){
		b[s[i]]++;
	}
	for(int i = 97 ; i <= 122 ;i++  ){
		if( b[i] == 0 ){
			cout <<"NO";
			return 0;
		}
	}
	cout <<"YES";
} 
