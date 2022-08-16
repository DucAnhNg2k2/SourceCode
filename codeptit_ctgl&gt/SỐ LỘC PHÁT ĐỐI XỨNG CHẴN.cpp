#include <bits/stdc++.h>
using namespace std;

void solve() {
	int n;
	cin >> n;
	queue<string> q;
	q.push("6");
	q.push("8");
	list<string> l;
	while(l.size() < n) {
		string top = q.front() ; q.pop();
		l.push_back(top);
		q.push(top+"6");
		q.push(top+"8");
	}
	for(auto i:l) {
		for(int j = 0;j < i.size();j++) cout << i[j];
		for(int j = i.size()-1 ; j >=0 ;j--) cout << i[j];
		cout << ' ';
	}
	cout << endl;
}

int main(){
    ios::sync_with_stdio(false);
	int T = 1;
	cin >> T;
	while( T-- )
    	solve();
    return 0;
}