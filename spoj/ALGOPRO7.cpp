#include<iostream>
#include<vector>
using namespace std;
void QuickSort(vector<int> &a, int l, int r) {
	int i = l;
	int j = r;
	long long p = a[(l + r) / 2];
	while (i < j) {
		while (a[i] < p) i++;
		while (a[j] > p) j--;
		if (i <= j) {
			swap(a[i], a[j]);
			i++;
			j--;
		}
	}
	if (i < r) QuickSort(a, i, r);
	if (j > l) QuickSort(a, l, j);
}
int main() {
	int n, k;
	cin >> n >> k;
	int d;
	vector<int> v;
	for (int i = 0; i < n; i++) {
		cin >> d;
		v.push_back(d);
	}
	QuickSort(v, 0, v.size() - 1);
	cout << v[k];
} 
