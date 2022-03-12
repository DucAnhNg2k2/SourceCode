#include <iostream>
using namespace std;
int main() {
	string n;
	cin >> n;
	while (n.size() % 3 != 0) {
		n = "0" + n;
	}
	for (int i = 0; i < n.size() - 2; i +=3) {
		string s = "";
		s += n[i];
		s += n[i + 1];
		s += n[i + 2];
		if (s == "000") cout << "0";
		if (s == "001") cout << "1";
		if (s == "010") cout << "2";
		if (s == "011") cout << "3";
		if (s == "100") cout << "4";
		if (s == "101") cout << "5";
		if (s == "110") cout << "6";
		if (s == "111") cout << "7";
 
	}
 
} 
