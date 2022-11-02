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
        LL ans = -Linf;
        LL dfs(Node<T> *root) {
            if(root->left == nullptr && root->right == nullptr) {
                return root->data;
            }
            vector<LL> v;
            if(root->left != nullptr) {
                v.push_back(dfs(root->left));
            }
            if(root->right != nullptr) {
                v.push_back(dfs(root->right));
            }
            sort(v.begin(),v.end(),greater<LL>());
            if(v.size()==2) {
                ans = max(ans,v[0]+v[1]+root->data);
            }
            return v[0] + root->data;
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
    tree.dfs(tree.root);
    cout << tree.ans << endl;
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