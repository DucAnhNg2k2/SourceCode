#include <bits/stdc++.h>

using namespace std;

int result(int x, int b[], int m, int dd[]) {
    if (x == 0) return 0;
    if (x == 1) return dd[0];
    int tmp = &b[m] - upper_bound(b, b + m, x) ;

    tmp += (dd[0] + dd[1]);

    if (x == 2) tmp -= (dd[3] + dd[4]);
    if (x == 3) tmp += dd[2];
    return tmp;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        int a[n], b[m], dd[5] = {0}, res = 0;
        for (int i = 0; i < n; i++) cin >> a[i];
        for (int i = 0; i < m; i++) {
            cin >> b[i];
            if (b[i] < 5) dd[b[i]]++;
        }
        sort(b, b + m);
        for (int i = 0; i < n; i++) {
            res += result(a[i], b, m, dd);
        }
        cout << res << endl;
    }
}
