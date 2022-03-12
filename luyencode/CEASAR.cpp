#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
	string LT = "abcdefghijklmnopqrstuvwxyzabcdefghijklmnopqrstuvwxyz";
	string s;
	cin >> s;
	int k;
	cin >> k;
	for(int i = 0 ; i < s.size() ; i++ ) {
		for(int j = LT.size()-1 ; j >= 0 ; j-- ) {
			if( s[i] == LT[j] ) {
				s[i] = LT[j-k];
				break;
			}
		}
	}
	cout << s;
}


