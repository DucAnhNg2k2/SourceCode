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
    private:
        Node<T> *top = nullptr;
        void print(Node<T> *tree) {
            if(tree != nullptr) {
                print(tree->left);
                print(tree->right);
                cout << tree->data << ' ';
            }
        }
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
        void print() {
            print(top);
            cout << endl;
        }
};


void in(int l,int r,LL a[],Tree<LL> &tree) {
    if(l <= r) {
        int m = (l+r)/2;
        tree.insert(a[m]);
        in(l,m-1,a,tree);
        in(m+1,r,a,tree);
    }
}
void solve() {
    int n;
    cin >> n;
    LL a[n+5] = {};
    FOR(i,1,n) cin >> a[i];
    sort(a+1,a+1+n);
    Tree<LL> tree;
    in(1,n,a,tree);
    tree.print();
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