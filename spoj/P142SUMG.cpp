#include<bits/stdc++.h>
using namespace std;
void solve(){
    string s;
    getline(cin,s);
    vector<int> b(300,0);
    for(int i = 0 ; i < s.length() ; i++ ){
        if( s[i] == ' ') continue;
        else{
            b[s[i]]++;
        }
    }
    // ki?¡Â»Æ?m tra xem c??Â³ 2 ph?¡ÂºÂ§n t?¡Â»Â­ xu?¡ÂºÂ¥t hi?¡Â»â?¡n nhi?¡Â»Âu nh?¡ÂºÂ¥t v?¡Â»â?ºi t?¡ÂºÂ§n s?¡Â»â?? = nhau kh??Â´ng
    int max = 0 ;
    int cs;
    for(int i = 0 ; i < 300 ; i++ ){
        if( max < b[i] ){
            max = b[i];
            cs = i;
        }
    }
    for(int i = 0 ; i < 300 ; i++ ){
        if( max == b[i] && cs != i){
            cout << "NOT POSSIBLE" << endl;
            return ;
        }
    }
    int d;
    if( cs >= 'E') d = cs - 'E';
	else{
		d = 'Z' -'E' + (cs - 'A')+1;
	}
	for(int i = 0 ; i < s.length() ; i++ ){
		if( s[i]==' ') continue;
		if( s[i] - 'A' >= d ) s[i] -= d;
		else{
			int h = d;
			h -= (s[i]-'A');
			s[i] = 'Z' - h+1;
		}
	}
	cout << d << ' ' << s << endl;
}
int main(){
    int t;
    cin >> t;
    cin.ignore();
    while( t-- ){
		solve();
    }
} 
