#include<bits/stdc++.h>
using namespace std;
 
string s;
long long f[1000005] = {0} , cnt = 0;
int main()
{
	ios_base::sync_with_stdio(false);cin.tie(NULL);
	cin >> s;
	s = ' ' + s;
	for(int i = 1 ; i < s.size() ; i++ ) {
		f[i] = f[i-1];
		if( s[i] == '1' ) f[i]++;
	}
	for(int i = 1 ; i < s.size() ; i++ ) {
		if( s[i] == '2' ) {
			cnt += f[i];
		}
	}
	cout << cnt;
} 
