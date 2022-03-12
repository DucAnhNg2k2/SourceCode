#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long ull;
int main(){
    ios_base::sync_with_stdio(false);
   	int n;
   	cin >> n;
   	int dem = 0 ;
   	for(int i = 1 ; i < n ; i++ ){
   		for(int j = i+1 ; j < n ; j++ ){
   			ull s = i*i +j*j;
   			ull h = sqrt(s);
   			if( h*h == s && h <= n ) dem++;
		   }
	   }
	   cout << dem;
}  
