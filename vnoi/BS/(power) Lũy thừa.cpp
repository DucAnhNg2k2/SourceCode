#include <iostream>
#include <math.h>
using namespace std;

int Tcase = 0;

void solve() {
	Tcase++;
	long long l, r;
    cin >> l >> r;
    for (int k = 42; k >= 1; k--) {
        long long lVal = 2, rVal = r;
        while (lVal <= rVal) {
            long long m = (lVal + rVal) / 2;
            if (pow(m, k) >= l && pow(m, k) <= r) {
//                Case #1: 4
				cout << "Case #" << Tcase << ": " << k << endl;
                return;
            }
            else if (pow(m, k) < l) {
                lVal = m + 1;
            }
            else {
                rVal = m - 1;
            }
        }
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--) {
    	solve();
    }
    
}
