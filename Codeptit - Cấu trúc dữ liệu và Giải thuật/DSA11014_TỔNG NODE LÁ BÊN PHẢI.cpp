#include <bits/stdc++.h>
#define LL long long 
#define ULL unsigned long long
#define FOR(i,a,b) for(int i=a;i<=b;++i)
#define FO(i,a,b) for(int i=a;i<b;++i)
#define FORD(i,a,b) for(int i=a;i>=b;--i)
#define fi first
#define se second
#define pb push_back
#define mp make_pair
#define endl '\n'
#define all(x) x.begin(),x.end()
#define debug cout << "YES" << endl
using namespace std;

typedef pair<int,int> pII;
typedef pair<LL,LL> pLL;
const int inf = 1e9;
const LL Linf = (LL) 1e18;
const LL MOD = 1000000007LL;
#define PI 3.141592653589793238;
#define maxn 100005

struct Node {
	int data;
	Node *left = nullptr;
    Node *right = nullptr;
	Node(){}
	Node(int data) {
		this->data = data;
		this->left = nullptr;
        this->right = nullptr;
	}
};	

int sumRightLeft(Node* root) {
        if(root == nullptr) return 0;
    //    cout << root->data << endl;
        int sum = 0;
        Node* p = root->right;
        if(p != nullptr && p->left == nullptr && p->right == nullptr) {
            sum += p->data;
           //    cout << " YES " << p->data << endl;
        }
    return sum + sumRightLeft(root->left) + sumRightLeft(root->right);
}

void solve() {
    int n;
    cin >> n;
    Node *root = nullptr;
    map<int,Node*> tree;
    FOR(i,0,n-1) {
        int u,v; char x;
        cin >> u >> v >> x;
        if(tree.find(u) == tree.end()) {
            Node *temp = new Node(u);
            tree[u] = temp;
            if(root == nullptr) root = temp;
        }
        Node *t = tree[u];
        Node *p = new Node(v);
        tree[v] = p;
        if(x=='L') t->left = p;
        else t->right = p;
    }
    cout << sumRightLeft(root) << endl;
}

int main(){
    ios::sync_with_stdio(false);
#ifndef ONLINE_JUDGE
    freopen("test.in","r",stdin);
    freopen("test.out","w",stdout);
#endif
	int T = 1;
	cin >> T;
	while( T-- )
    	solve();
    return 0;
}