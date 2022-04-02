#include<bits/stdc++.h>
using namespace std;
struct BongDa{
    string name;
    int point;
};
bool check(BongDa a , BongDa b){
    if( a.point < b.point ) return false;
    if( a.point == b.point ){
    	if( a.name > b.name ) return false;
	}
	return true;
}
void solve(){
    int n;
    cin >> n;
    string s1 , s2;
    cin >> s1 >> s2;
    BongDa c[n];
    for(int i = 0 ; i < n ; i++ ){
        cin >> c[i].name >> c[i].point;
    }
    // th1 win 
    for(int i = 0 ; i < n ; i++ ){
        if( c[i].name == s1 ) c[i].point += 3;
    }
    sort(c,c+n,check);
   
    for(int i = 0 ; i < n ; i++ ){
        if( c[i].name == s1 ){
            cout << i+1 << ' ';
            c[i].point -= 3;
            break;
        }
    }
    // th2 thua 
    for(int i = 0 ; i < n ; i++ ){
        if( c[i].name == s2 ) c[i].point += 3;
    }
    sort(c,c+n,check);
    for(int i = 0 ; i < n ; i++ ){
        if( c[i].name == s1 ){
            cout << i+1 << ' ';
            break;
        }
    }
    for(int i = 0 ; i < n ;i++){
    	if( c[i].name == s2 ){
    		c[i].point -= 3;
    		break;
		}
	}
    // th3 hoa
    for(int i = 0 ; i < n ; i++){
        if( c[i].name == s1 ) c[i].point += 1;
        if( c[i].name == s2 ) c[i].point += 1;
    }
    sort(c,c+n,check);
    for(int i = 0 ; i < n ; i++ ){
        if( c[i].name == s1 ){
            cout << i+1 << ' ';
            c[i].point -= 1;
            break;
        }
    }
	cout << endl;
}
int main(){
    int t;
    cin >> t;
    while( t-- ){
        solve();
    }
} 
