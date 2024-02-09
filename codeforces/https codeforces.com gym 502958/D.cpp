#include<bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
	int a[3], b[3], sum1 = 0, sum2 = 0;
	for(int i = 0; i < 3; i++) {
		cin >> a[i];
		sum1 += a[i];
	}
	for(int i = 0; i < 3; i++) {
		cin >> b[i];
		sum2 += b[i];
	}
	sort(a, a+3);
	sort(b, b+3);
	if(sum1 == sum2) {
		cout << 0;
	}
	else if(sum1 > sum2) {
		int sub = sum1 - sum2, dem = 0;
		for(int i = 0; i < 3; i++) {
			int sub_ = 9 - b[i] + 1;
			if(sub <= sub_) {
				dem++;
				break;
			}
			sub -= sub_;
			dem++;
		}
		cout << dem;
	}
	else {
		int sub = sum2 - sum1, dem = 0;
		for(int i = 0; i < 3; i++) {
			int sub_ = 9 - a[i];
			if(sub <= sub_) {
				dem++;
				break;
			}
			sub -= sub_;
			dem++;
		}
		cout << dem;
	}
}

