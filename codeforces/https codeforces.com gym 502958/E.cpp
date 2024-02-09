#include<bits/stdc++.h>
using namespace std;

vector<int> g[100005];
vector<int> p[100005];

bool checkG[100005] = {};
bool checkP[100005] = {};

void Try(int idGr) {
	for(int i = 0; i < g[idGr].size(); i++) {
		int id = g[idGr][i];
		if(checkP[id] == false) {
			checkP[id] = true;
			for(int j = 0; j < p[id].size(); j++) {
				if(checkG[p[id][j]] == false) {
					checkG[p[id][j]] = true;
					Try(p[id][j]);
				}
			}
		}
	}
}

int main() {
	ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
	int n, m;
	cin >> n >> m;
	for(int i = 1; i <= m; i++) {
		int x;
		cin >> x;
		for(int j = 1; j <= x; j++) {
			int id;
			cin >> id;
			g[i].push_back(id);
			p[id].push_back(i);
		}	
	}
	checkP[1] = true;
	for(int i = 0; i < p[1].size(); i++) {
		int idGr = p[1][i];
		checkG[idGr] = true;
		Try(idGr);
	}
	int dem = 0;
	for(int i = 1; i <= n; i++) {
		if(checkP[i]) {
			dem++;
		}
	}
	cout << dem << endl;
	for(int i = 1; i <= n; i++) {
		if(checkP[i]) {
			cout << i << " ";
		}
	}
}

