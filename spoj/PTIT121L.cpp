#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
struct Rectangle{
    ll dai;
    ll rong;
    ll s ;
};
void check(Rectangle &hcn){
    if( hcn.rong > hcn.dai ) swap(hcn.dai,hcn.rong);
}
int main(){
 
    Rectangle h1,h2,h3;
    cin >> h1.dai >> h1.rong;
    cin >> h2.dai >> h2.rong;
    cin >> h3.dai >> h3.rong;
    check(h1);
    check(h2);
    check(h3);
 
    if( h1.dai < h2.dai ) swap(h1,h2);
    if( h1.dai < h3.dai ) swap(h1,h3);
    if( h2.dai < h3.dai ) swap(h2,h3);
 
	h1.s = h1.dai*h1.rong;
	h2.s = h2.dai*h2.rong;
	h3.s = h3.dai*h3.rong;
	
	ll S = h1.s + h2.s + h3.s;
	ll h = sqrt(S);
//	cout << h1.dai << " " << h1.rong << endl;
//	cout << h2.dai << " " << h2.rong << endl;
//	cout << h3.dai << " " << h3.rong << endl;
	if( h*h != S){
		cout << 0 ;
		return 0;
	}
	else{
		if( h1.dai == h2.dai && h2.dai == h3.dai ){
			if( h1.dai != h ){
				cout << 0 ;
				return 0;
			}
			else{
				if( h1.rong + h2.rong + h3.rong == h ){
					cout << h ;
					return 0;
				}
				else{
					cout << 0 ;
					return 0;
				}
			}
		}
		else{
			if( h1.dai + 2*h1.rong + h2.dai + h2.rong + h3.dai + h3.rong == 4*h ){
				cout << h;
				return 0;
			}
			else{
				cout << 0;
				return 0;
			}
		}
	}
