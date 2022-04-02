#include<bits/stdc++.h>
using namespace std;
int main(){
	int n, s;
	cin >> n >> s;
	bool l[s+1] ={false};
	for(int i = 0 ; i < n ;i++ ){
		int a;
		cin >> a;
		l[a] = true;
		for(int j = s; j >= a ; j-- ){
			if( l[j-a] == true ) l[j] = true;
		}
	}
	if( l[s] ) cout <<"YES";
	else cout <<"NO";
}  
