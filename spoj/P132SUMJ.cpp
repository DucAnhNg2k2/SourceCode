#include<bits/stdc++.h>
using namespace std;
int a[10];
char b[10];
int n;
bool ChuaXet[10];
string Max = "999999";
string s;
string Xuat(){
    string res ="";
    for(int i = 1 ; i <= n ; i++ ){
    	res = res + b[a[i]];
	}
	return res;
}
void Try(int i){
    for(int j = 1 ; j <= n ; j++ ){
        if( ChuaXet[j] ){
            a[i] = j;
            ChuaXet[j] = false;
            if( i== n ){
            	if( Xuat() > s && Xuat() < Max ) Max = Xuat();
			}
            else Try(i+1);
            ChuaXet[j] = true;
        }
    }
}
int main(){
	cin >> s;
	n = s.length();
	s = '@'+s;
    for(int i = 1 ; i<= s.length() ; i++ ){
    	b[i] = s[i];
	}
	s.erase(0,1);
    for(int i = 1 ; i<= n ; i++ ){
        ChuaXet[i] = true;
    }
    Try(1);
    if( Max =="999999") cout << 0;
    else cout << Max;
} 
