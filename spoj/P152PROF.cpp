#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
void timmax(ll m ,ll s){
    ll a[m] = {0};
    for(int i = 0 ; i < m ; i++ ){
        if( s >= 9 ){
            a[i] = 9;
            s -= 9;
        }
        else{
            a[i] = s;
            break;
        }
    }
    for(int i = 0 ; i < m ; i++ ){
        cout << a[i];
    }
}
void timmin(ll m ,ll s){
 	ll a[m] = {0};
    for(int i = 0 ; i < m ; i++ ){
        if( s >= 9 ){
            a[i] = 9;
            s -= 9;
        }
        else{
            a[i] = s;
            break;
        }
    }
    ll b[m];
    int size = 0;
    for(int i = m -1 ; i >=0 ; i-- ){
    	b[size] = a[i];
    	size++;
	}
	if( b[0] == 0 ){
		b[0] = 1;
		for(int i = 1 ; i < m ; i++ ){
		if( b[i] > 0 ){
			b[i] --;
			break;
			}
		}	
	}
	for(int i = 0 ; i < m ; i++ ) cout << b[i];
}
int main(){
    ll m , s;
    cin >> m >> s;
    int a[m];
    if( m == 1 && s == 0 ){
        cout <<"0 0";
        return 0;
    }
    if( s <= 0 || s > 9*m ){
        cout << "-1 -1 ";
        return 0;
    }
    timmin(m,s);
    cout << ' ';
    timmax(m,s);
} 
