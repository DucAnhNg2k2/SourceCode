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
    public:
        Tree(int x) {
            root = new Node<T>(x);
        }
        void insert(Node<T> *&root,int u,int v,char x) {
            if(root == nullptr) {
                return;
            }
            if(root->data == u) {
                if( x == 'L') root->left = new Node<T>(v);
                else root->right = new Node<T>(v);
                return;
            }   
            insert(root->left,u,v,x);
            insert(root->right,u,v,x);
        }
        void print() {
            deque<Node<T>*> q;
            q.push_back(root);
            int dem = 1;
            while(q.size()) {
                deque<Node<T>*> temp;
                if(dem%2 == 0) {
                    while(q.size()) {
                        Node<T> *p = q.front(); q.pop_front();
                        cout << p->data << ' ';
                        if(p->left != nullptr) temp.push_back(p->left);
                        if(p->right != nullptr) temp.push_back(p->right);
                    }
                }
                else {
                    while(q.size()) {
                        Node<T> *p = q.back(); q.pop_back();
                        cout << p->data << ' ';
                        if(p->right != nullptr) temp.push_front(p->right);
                        if(p->left != nullptr) temp.push_front(p->left);
                        
                    }
                }
                q = temp;
                dem++;
            }
            cout << endl;
        }
};


void solve() {
    int n;
    cin >> n;
    int a[n],b[n]; char c[n];
    FOR(i,0,n-1) {
        cin >> a[i] >> b[i] >> c[i];
    }
    Tree<int> tree(a[0]);
    FOR(i,0,n-1) {
        tree.insert(tree.root,a[i],b[i],c[i]);
    }
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