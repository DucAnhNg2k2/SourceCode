#include <iostream>
using namespace std;
int main() {
	while(true){
	int a, b;
	cin >> a >> b;
	if( a==0 && b==0 ) break;
	char s[150][150];
	for (int i = 1; i <= a; i++) {
		for (int j = 1; j <= b; j++) {
			cin >> s[i][j];
		}
	}
	// g?³c tr?¡i tr?ªn
	if (s[1][1] != '*')
	{
		int dem = 0;
		if (s[2][1] == '*') dem++;
		if (s[1][2] == '*') dem++;
		if (s[2][2] == '*') dem++;
		s[1][1] = (char)(dem + '0');
	}
	// g?³c ph?i tr?ªn
	if (s[1][b] != '*')
	{
		int dem = 0;
		if (s[2][b] == '*') dem++;
		if (s[1][b - 1] == '*')dem++;
		if (s[2][b - 1] == '*') dem++;
		s[1][b] = (char)(dem + '0');
	}
	// g?³c tr?¡i du?i
	if (s[a][1] != '*') {
		int dem = 0;
		if (s[a - 1][1] == '*') dem++;
		if (s[a][2] == '*') dem++;
		if (s[a - 1][2] == '*') dem++;
		s[a][1] = (char)(dem + '0');
	}
	// g?³c ph?i du?i
	if (s[a][b] != '*') {
		int dem = 0;
		if (s[a - 1][b] == '*') dem++;
		if (s[a][b - 1] == '*') dem++;
		if (s[a - 1][b - 1] == '*') dem++;
		s[a][b] = (char)(dem + '0');
	}
// tinh toan voi hang dau tien
	for (int j = 2; j < b; j++) {
		// s[1][j]
		if (s[1][j] != '*')
		{
			int dem = 0;
			if (s[1][j - 1] == '*') dem++;
			if (s[2][j] == '*') dem++;
			if (s[1][j + 1] == '*')dem++;
			if (s[2][j + 1] == '*') dem++;
			if (s[2][j - 1] == '*') dem++;
			s[1][j] = (char)(dem + '0');
		}
	}
// tinh toan voi hang cuoi cung
	for (int j = 2; j < b; j++) {
		// s[a][j]
		if (s[a][j] != '*')
		{
			int dem = 0;
			if (s[a][j - 1] == '*') dem++;
			if (s[a - 1][j] == '*') dem++;
			if (s[a][j + 1] == '*')dem++;
			if (s[a - 1][j - 1] == '*') dem++;
			if (s[a - 1][j + 1] == '*')dem++;
			s[a][j] = (char)(dem + '0');
		}
	}
// tinh toan voi cot dau tien
	for (int i = 2; i < a; i++)
	{
		if (s[i][1] != '*')
		{
			int dem = 0;
			if (s[i - 1][1] == '*') dem++;
			if (s[i + 1][1] == '*') dem++;
			if (s[i][2] == '*') dem++;
			if (s[i - 1][2] == '*')dem++;
			if (s[i + 1][2] == '*') dem++;
			s[i][1] = (char)(dem + '0');
		}
	}
// tinh toan voi cot ben phai cung
	for (int i = 2; i < a; i++)
	{
		if (s[i][b] != '*')
		{
			int dem = 0;
			if (s[i - 1][b] == '*') dem++;
			if (s[i + 1][b] == '*') dem++;
			if (s[i][b-1] == '*') dem++;
			if (s[i + 1][b - 1] == '*') dem++;
			if (s[i - 1][b - 1] == '*')dem++;
			s[i][b] = (char)(dem + '0');
		}
	}
// o phia trong
	for (int i = 2; i < a; i++) {
		for (int j = 2; j < b; j++) {
			if (s[i][j] != '*') {
				int dem = 0;
				if (s[i - 1][j - 1] == '*') dem++;
				if (s[i - 1][j] == '*') dem++;
				if (s[i - 1][j + 1] == '*') dem++;
				if (s[i][j + 1] == '*') dem++;
				if (s[i + 1][j + 1] == '*') dem++;
				if (s[i + 1][j] == '*') dem++;
				if (s[i+1][j - 1] == '*') dem++;
				if (s[i][j - 1] == '*') dem++;
				s[i][j] = (char)(dem + '0');
			}
		}
	}
	for (int i = 1; i <= a; i++) {
		for (int j = 1; j <= b; j++) {
			cout << s[i][j];
		}
		cout << endl;
	}
}
} 
