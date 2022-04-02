#include<iostream>
#include<sstream>
using namespace std;
int main(){
	int t;
	cin >> t;
	while(t--){
	string s;
	cin >> s;
	int num1 = 0 ;
	num1 += (int)(s[s.length()-2]-'0');
	num1 =num1*10 + (int)(s[s.length()-1]-'0');
	if (num1%4==0) cout << 4<< endl;
	else cout << 0<< endl;
	}
} 
