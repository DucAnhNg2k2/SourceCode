#include<bits/stdc++.h>
using namespace std;
bool cmp(int a,int b){
	if( a < b ) return true;
	return false;
}
int main(){
	string s;
	cin >> s;
	int n = s.length();
	int a[300] ={0};
	for(int i = 0 ; i < s.length() ; i++ ){
		a[s[i]]++;
	}
	int dem = 0;
	for(int i = 0 ; i < 300 ; i++ ){
		if( a[i] >= 1 ) dem++;
	}
	sort(a,a+300,cmp);
	if( dem <= 2 ){
		cout << 0 ;
		return 0;
	}
	else{
		int k = dem - 2;
		int count = 0;
		int sum = 0;
		for(int i = 0 ; i < 300 ; i++ ){
			if( a[i] >=1 ){
				count++;
				sum += a[i];
				if( count == k ) break;
			}
		}
		cout << sum;
	}
} 
