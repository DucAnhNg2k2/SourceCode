#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
main(){
    ios_base::sync_with_stdio(0);
    ll n;
    cin >> n;
    ll a[n];
    for(int i = 0 ; i < n ; i++ ){
        cin >> a[i];
    }
    ll l[n];
    l[0] = a[0];
    for(int i = 1 ; i < n ; i++ ){
        l[i] = a[i] + l[i-1];
    }
    ll Max = -1e15; 
    ll Min = 1e15;
    for(int i = 0 ; i < n ; i++){
        if( Max < l[i] ){
            Max = l[i];
        }
        if( Min > l[i] ){
            Min = l[i];
        }
    }
   	if( Max > 0 ){
   		if( Min > 0 ) cout << Max;
   		else cout << Max-Min;
	}
	else
	{
		if( Min < 0 ) cout << abs(min(Max,Min));
		else cout << abs(Max-Min);
	}
}  
