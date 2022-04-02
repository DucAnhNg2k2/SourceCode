#include<bits/stdc++.h>
using namespace std;
int C(int k, int n) {
    if (n == 0 || n == 2) return 1;
    return n-1 + C(2, n - 1);
}
int main(){
    ios_base::sync_with_stdio(false);
	int n, k ;
	cin >> n >> k;
	map<int,int> m;
	int a[10005];
	for(int i = 0 ; i < n ; i++){
		cin >> a[i];
		m[a[i]]++;
	}
    int dem = 0 ;
    for (int i=0 ; i<n ; i++)
    	if ( k-a[i]==a[i] ){
    		if ( m[a[i]]>1 ){
	    		dem += C(2,m[a[i]]); 
	    		m[a[i]] = 0 ;
    		}
    	}
		else if ( m[k-a[i]] > 0 ){
    		dem += m[a[i]]*m[k-a[i]];
			m[a[i]] = 0;
			m[k-a[i]] =0;
		}
	cout << dem ;
}	
