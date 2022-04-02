#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
	ll n;
	cin >> n;
	if (n%2)
		cout << (-1-n)/2;
	else 
		cout << (-1+n)/2+1;	
	return 0;
} 
