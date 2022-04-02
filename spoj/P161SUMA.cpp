#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
	ios_base::sync_with_stdio(false);
    ll canh1 , canh2;
    cin >> canh1 >> canh2;
    if( canh1 == canh2 ){
    	cout << 0 ;
    	return 0 ;
	}
    ll dem = 0 ;
    while( true ){
		if( canh1 < canh2 ) swap(canh1,canh2);
        if( canh1%canh2 ==0 ){
        	dem += canh1/canh2;
        	break;
			}
		else{
			dem += canh1/canh2;
			canh1 %= canh2;
			}
    }
    cout << dem;
}
 
