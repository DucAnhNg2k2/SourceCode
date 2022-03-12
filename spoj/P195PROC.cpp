#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    int a[n];
    for(int i = 0 ; i < n ; i++ ) cin >> a[i];
    sort(a,a+n);
    int l[n];
    l[0] = a[0];
    for(int i = 1 ; i < n ; i++ ) l[i] = l[i-1] + a[i];
  //  for(int i = 0 ; i < n ; i++ ) cout << l[i] << ' ';
    int sum = 0 ;
    int cs = 0;
    for(int i = 0 ; i < n ; i++){
        if( l[i] <= 300 ){
        	cs = i+1;
        	sum += l[i];
		}
        else{
            break;
        }
    }
    cout << cs << ' ' << sum;
}  
