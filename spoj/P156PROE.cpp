#include<bits/stdc++.h>
using namespace std;
string reset(string s){
	string res="";
	for(int i = 0 ; i < s.length() ; i++ ){
		res = s[i] + res;
	}
	return res;
}
int main(){
	string D ="ABCDEFGHIJKLMNOPQRSTUVWXYZ_.ABCDEFGHIJKLMNOPQRSTUVWXYZ_.";
	while(true){
		int d;
		cin >> d;
		if( d == 0 ) return 0;
		string s;
		cin >> s;
		s = reset(s);
		for(int i = 0 ; i < s.length() ; i++ ){
			for(int j = 0 ; j < D.length() ; j++ ){
				if( s[i] == D[j] ){
					s[i] = D[j+d];
					break;
				}
			}
		}
		cout << s << endl;
	}
} 
