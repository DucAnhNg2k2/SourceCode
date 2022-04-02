#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
struct Node{
	ll data;
	Node *pNext;
};
struct List{
	Node *pHead;
	Node *pTail;
};
void KhoiTaoList(List &list){
	list.pHead = NULL;
	list.pTail = NULL;
}
Node *KhoiTaoNode(ll data){
	Node *pNode = new Node;
	pNode->data = data;
	pNode->pNext = NULL;
}
void ThemNodeVaoList(List &list,Node *pNode){
	if( list.pHead == NULL ){
		list.pHead = list.pTail = pNode;
	}
	else{
		list.pTail->pNext=pNode;
		list.pTail=pNode;
	}
}
void ChuyenDauTienVaoCuoi(List &list){
	ll tmp = list.pHead->data;
	Node *temp = list.pHead;
	list.pHead = list.pHead->pNext;
	delete temp;
	Node *pNode = KhoiTaoNode(tmp);
	list.pTail->pNext=pNode;
	list.pTail =pNode;
}
void ChuyenThuHaiVaoCuoi(List &list){
	Node *Mot = list.pHead;
	Node *Hai = Mot->pNext;
	ll tmp = Hai->data;
	Node *pNode = KhoiTaoNode(tmp);
	list.pTail->pNext=pNode;
	list.pTail =pNode;
	list.pHead->pNext = Hai->pNext;
	delete Hai;
}
void DuyetList(List list){
	Node *Tmp = list.pHead;
	while( Tmp != NULL ){
		cout << Tmp->data << ' ';
		Tmp = Tmp->pNext;
	}
}
int main(){
	ios_base::sync_with_stdio(false);
	List l;
	KhoiTaoList(l);
    ll m , k;
    cin >> m >> k;
    for(int i = 0 ; i < m  ; i++ ){
        Node *pNode = KhoiTaoNode(i);
        ThemNodeVaoList(l,pNode);
    }
//    DuyetList(l);
//    cout << endl;
    string s;
    cin >> s;
    for(int i = 0 ; s[i] !='.'  ; i++ ){
    	if( s[i] =='A') ChuyenDauTienVaoCuoi(l);
    	if( s[i] =='B') ChuyenThuHaiVaoCuoi(l);
//    	cout << s[i] <<' '; DuyetList(l);
//    	cout << endl;
	}
	int dem = 0;
	Node *Tmp = l.pHead;
	while( Tmp != NULL ){
		if ( dem == k- 1 ){
			Node *Mot = Tmp;
			Node *Hai = Mot->pNext;
			Node *Ba = Hai->pNext;
			cout << Mot->data << ' ' << Hai->data << ' ' << Ba->data ;
			return 0;
		}
		Tmp = Tmp->pNext;
		dem++;
	}
}   
