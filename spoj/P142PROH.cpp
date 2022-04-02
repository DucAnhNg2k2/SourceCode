#include<bits/stdc++.h>
using namespace std;
char s[1000][1000];
bool check(int a,int b,int x,int y){
	for(int i = 0 ; i < b ; i++ ){
		if( s[x][i] =='S') return false;
	}
	return true;
}
bool check1(int a,int b,int x,int y){
	for(int i = 0 ; i < a ;i++ ){
		if( s[i][y] =='S') return false;
	}
	return true;
}
int main(){
	int dem = 0 ;
    int a , b;
    cin >> a >> b;
    for(int i = 0 ; i < a ; i++ ){
        for(int j = 0 ; j < b ; j++ ){
            cin >> s[i][j];
        }
    }
    for(int i = 0 ; i < a ; i++ ){
        for(int j = 0 ; j < b ; j++ ){
            if( check(a,b,i,j) || check1(a,b,i,j)) dem++;
        }
    }
    cout << dem;
} 
