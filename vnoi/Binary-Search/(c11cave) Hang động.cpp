#include <bits/stdc++.h>
using namespace std;

// leftmost
int search(vector<int> &a, int x) {
	int l = 0, r = a.size() - 1;
	if(a[r] < x) {
		return -1;
	}
	
	while(l < r) {
		int m = (l+r) / 2;
		if(x > a[m]) {
			l = m + 1;
		}
		else r = m;
	}
	return l;
}

void solve() {
    int n, h, res = INT_MAX, cnt = 0;
    cin >> n >> h;
    vector<int> a, b;
    for(int i = 1; i <= n; i++) {
    	int x;
    	cin >> x;
    	if(i&1) {
    		a.push_back(x);
		}
		else {
			b.push_back(x);
		}
	}
	sort(a.begin(), a.end());
	sort(b.begin(), b.end());
	
	// 2 Array, 1 Cai Tren, 1 Cai Duoi
	// Chay full tu 1 -> H, search xem index gan nhat di qua la bao nhieu
	for(int i = 1; i <= h; i++) {
		int sum = 0;
		
		// A
		int indexA = search(a, i);
		if(indexA != -1) {
			sum += n/2 - indexA;	
		}

		
		// B
		int indexB = search(b, h-i+1);
		if(indexB != -1) {
			sum += n/2 - indexB;
		}
		
		if(res == sum) {
			cnt++;
		}
		else if(res > sum) {
			res = sum;
			cnt = 1;
		}
	}
	cout << res << " " << cnt << endl;
}

int main()
{
    int t = 1;
    // cin >> t;
    while (t--)
    {
        solve();
    }
}
