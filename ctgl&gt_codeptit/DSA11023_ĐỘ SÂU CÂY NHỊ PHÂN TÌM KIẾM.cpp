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

template<class T>
struct Node {
	T data;
	Node *left = nullptr;
    Node *right = nullptr;
	Node(){}
	Node(T data) {
		this->data = data;
		this->left = nullptr;
        this->right = nullptr;
	}
};	

template<class T>
class Tree {
    public:
        Node<T> *root = nullptr;
        void print(Node<T> *tree) {
            if(tree != nullptr) {
                print(tree->left);
                print(tree->right);
                cout << tree->data << ' ';
            }
        }
        Tree() {}
        void insert(Node<T>* &root,T x) {
            if(root == nullptr) {
                root = new Node<T>(x);
                return;
            }
            if(root->data < x) insert(root->right,x);
            else insert(root->left,x);
        }
        void insert(T x) {
            insert(root,x);
        }
        int level(Node<T>* root) {
            if(root == nullptr) return -1;
            return 1 + max(level(root->left),level(root->right));
        }
        int level() {
            return level(root);
        }
};


void solve() {
    int n;
    cin >> n;
    Tree<int> tree;
    FOR(i,1,n) {
        int x;
        cin >> x;
        tree.insert(x);
    }
    cout << tree.level() << endl;
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