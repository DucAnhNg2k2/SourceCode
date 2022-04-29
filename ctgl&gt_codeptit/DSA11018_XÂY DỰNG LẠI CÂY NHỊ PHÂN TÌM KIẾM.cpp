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
        Node<T> *top = nullptr;
        void insert(Node<T> *&tree,T x) {
            if(tree == nullptr) {
                tree = new Node<T>(x);
                return;
            }
            else {
                if(tree->data < x) {
                    insert(tree->right,x);
                }
                else {
                    insert(tree->left,x);
                }
            }
        } 
    public:
        void insert(T x) {
            if(top == nullptr) {
                top = new Node<T>(x);
                return;
            }
            Node<T> *tmp = top;
            while(tmp != nullptr) {
                if(tmp->data < x) {
                    if(tmp->right == nullptr) {
                        tmp->right = new Node<T>(x);
                        return;
                    }
                    tmp = tmp->right;
                }
                else {
                    if(tmp->left == nullptr) {
                        tmp->left = new Node<T>(x);
                        return;
                    }
                    tmp = tmp->left;
                }
            }
        }
        void printf(Node<T> *root) {
            if(root != nullptr) {
                cout << root->data << ' ';
                printf(root->left);
                printf(root->right);
            }
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
	tree.printf(tree.top);
    cout << endl;
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