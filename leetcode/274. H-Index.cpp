#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int hIndex(vector<int>& citations) {
        int dd[1005] = {}, cnt[1005] = {}, h = 0;
        for(auto i: citations) {
        	dd[i]++;
		}
		cnt[0] = dd[0];
		for(int i = 1000; i >= 0; i--) {
			cnt[i] = cnt[i+1] + dd[i];
		}
		for(int i = 0; i <= 1000; i++) {
			if(cnt[i] >= i) {
				h = i;
			}
 		}
 		return h;
    }
};

int main() {
	ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
	vector<int> v;
	v.push_back(3);
	v.push_back(0);
	v.push_back(6);
	v.push_back(1);
	v.push_back(5);
	
	cout << Solution().hIndex(v);
}
