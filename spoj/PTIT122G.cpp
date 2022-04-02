#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
bool check(int a[],int n){
	for(int i = 1 ,j = n ; i <= n ,j >= 1 ; i++,j-- ){
		if( i > j ) break;
		if( a[i] != a[j] ) return false;
	}
	return true;
}
void solve(string s){
	int n = s.length();
	int a[n+1];
	for(int i = 0 ; i < s.length() ; i++ ){
		a[i+1] = (int)(s[i]-'0');
	}
	ll sum = 0 ;
	for(int i = 1 ; i <= n ; i++) sum = sum*10 + a[i];
	while(true){
		if( check(a,n) ) break;
		for(int i = 1 , j = n ; i <= n , j >= 1 ; i++ , j-- ){
		if( i >= j ) break;
		if( a[i] >= a[j] ) a[j] = a[i];
		if( a[i] < a[j] ){
			a[j] = a[i];
			a[j-1]++;
			int tmp;
			if( a[j-1] >= 10 ){
				a[j-1] -=10;
				tmp = 1;
			}
			if( tmp != 0 ){
				int k =j-1;
				while( tmp != 0 ){
					a[k-1]++;
					if( a[k-1] >=10 ){
						tmp =1 ;
						a[k-1] -= 10 ;
					}
					else{
						tmp = 0;
					}
					k--;
				} 
			} 
		}
	}
	}
//	for(int i = 1 ; i<= n ; i++ ) cout << a[i] ;
//	cout << endl;
	ll sum1 = 0 ;
	for(int i = 1 ; i <= n ; i++ ) sum1 = sum1*10 + a[i];
	cout << sum1 - sum << endl;
}
int main(){
	while(true){
		string s;
		cin >> s;
		if( s=="0") break;
		solve(s);
	}
} 
