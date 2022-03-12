#include <bits/stdc++.h>
using namespace std;

char s[15][15] ;
vector<vector<bool> > hang(15,vector<bool>(15,true)),cot(15,vector<bool>(15,true));

int dem3x3[15][15][15] ;
int cnt[15] = {0};

bool check = false;

int change(int x) {
	if( x >= 1 && x <= 3 ) x = 1;
	if( x >= 4 && x <= 6 ) x = 4;
	if( x >= 7 && x <= 9 ) x = 7;
	return x;
}

void Printf() {
	for(int i = 1 ; i <= 9 ; i++ )
		for(int j = 1 ; j <= 9 ; j++ ) 
			cout << s[i][j] ;
}

void Try(int x,int y) {
	
	if( check ) 
		return;

	if( s[x][y] == '.' ) {
		for(int i = '1' ; i <= '9' ; i++ ) {
			if( hang[x][i-48] && cot[y][i-48] && cnt[i-48] < 9 && dem3x3[change(x)][change(y)][i-48] == 0 ) {
				hang[x][i-48] = cot[y][i-48] = false;
				s[x][y] = i;
				cnt[i-48]++;
				dem3x3[change(x)][change(y)][i-48] = 1;
				Try(x,y);
				s[x][y] = '.';
				hang[x][i-48] = cot[y][i-48] = true;
				cnt[i-48]--;
				dem3x3[change(x)][change(y)][i-48] = 0;
			}
		}
	}
	else {
		if( y%3 != 0 ) {
			Try(x,y+1);
		}
		else if( x%3 != 0 ) {
			Try(x+1,y-2);
		}
		else {
			if( x == 9 && y == 9 ) {
				Printf();
				check = true;
				return;
			}
			else if( y < 9 ) {
				Try(x-2,y+1);
			}
			else {
				Try(x+1,1);
			}
		}
	}
}

int main() {
	ios_base::sync_with_stdio(false);cin.tie(NULL);
	for(int i = 1 ; i <= 9 ; i++ ) {
		for(int j = 1 ; j <= 9 ; j++ ) {
			cin >> s[i][j] ;
			if( s[i][j] != '.') {
				hang[i][s[i][j]-48] = false;
				cot[j][s[i][j]-48] = false;
				cnt[s[i][j]-48]++;
				dem3x3[change(i)][change(j)][s[i][j]-48] = 1;
			}
		}
	}
	Try(1,1);
}
