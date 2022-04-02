#include<bits/stdc++.h>
using namespace std;
int main(){
	long long l[100];
	l[0] = 0;
	l[1] = 1;
	for(int i = 2; i < 100 ; i++ ){
		l[i] = l[i-1]+l[i-2];
	}
	int n;
	cin >>n;
	cout << l[n];
}
