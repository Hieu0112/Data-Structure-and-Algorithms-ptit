#include<bits/stdc++.h>
using namespace std;
//kHAI BAO 1 CAY NHI PHAN
typedef struct node{
	int data;
	node *left;
	node *right;
} *Tree;
//CAC THAO TAC TREN CAY NHI PHAN
//KHOI TAO CAY NHI PHAN: DUA VE RONG
void Init(Tree *T){
	*T=NULL;
}
//CAP PHAT MIEN NHO CHO 1 NODE
Tree GetNode(){
	Tree p;
	p=new node;
	return p;
}
//GIAI PHONG 1 NODE P CHO CAY T
void FreeNode(Tree p){
	delete(p);
}
//KIEM SOAT TINH RONG CUA CAY T
int isEmpty(Tree *T){
	if(*T==NULL)	return 1;
	return 0;
}
//Tao 1 Node cho cay T
Tree MakeNode(int x){
	Tree p;
	p=GetNode();
	p->data=x;
	p->left=NULL;
	p->right=NULL;
	return p;
}
//Tim node p co noi dung la x tren cay
Tree Search(Tree T,int x){
	Tree p;
	if(T==NULL) return NULL;
	if(T->data==x) return T;//Neu Node goc la node can tim-> tra lai node
	p=Search(T->left,x);
		if(p==NULL)
			p=Search(T->right,x);
	return p;	
}
//Tao Node cho goc cay
Tree MakeRoot(Tree T,int x){
	if(T==NULL)
		return MakeNode(x);
	return T;
}
//Tao node la ben trai node co noi dung la x
void addleft(Tree T,int x,int y){
	Tree p,q;
	p=Search(T,x);//Tim node co noi dung la x tren cay
	//Neu x khong ton tai thi khong the them duoc
	if(p==NULL)
		return ;
	//Neu co nhanh ben trai roi thi khong duoc them
	else if(p->left!=NULL)
		return;
	else{
		q=MakeNode(y);
		//Node ben trai cua p la q
		p->left=q;
	}
}
//Tao node la ben phai node co noi dung la x
void addright(Tree T,int x,int y){
	Tree p,q;
	p=Search(T,x);//Tim node co noi dung la x tren cay
	//Neu x khong ton tai thi khong the them duoc
	if(p==NULL)
		return ;
	else if(p->right!=NULL)	return;
	else{
		q=MakeNode(y);
		//Node ben phai cua p la q
		p->right=q;
	}
}
//Loai bo node la ben trai co noi dung la x
void Remove_Left(Tree T,int x){
	Tree p,q;
	p=Search(T,x);
	if(p==NULL)	return;
	else if(p->left==NULL)	return ;
	else {
		q=p->left;
		//Ngat lien ket node p
		p->left=NULL;
		delete(q);//loai bo node ben trai
	}
}
//Loai bo node la ben phai co noi dung la x
void RemoveLeft(Tree T,int x){
	Tree p,q;
	p=Search(T,x);
	if(p==NULL)	return;
	else if(p->right==NULL)	return ;
	else {
		q=p->right;
		//Ngat lien ket node p
		p->right=NULL;
		delete(q);//loai bo node ben trai
	}
}
//Duyet cay nhi phan thu tu truoc(Node-l-r)
void NLR(Tree T){
	if(T!=NULL){
		cout<<T->data<<" ";
		NLR(T->left);
		NLR(T->right);
	}
}
//Duyet cay nhi phan thu tu Giua(L-N-R)
void LNR(Tree T){
	if(T!=NULL){
		LNR(T->left);
		cout<<T->data<<" ";
		LNR(T->right);
	}
}
//Duyet cay nhi phan thu tu Sau(L-R-N)
void LRN(Tree T){
	if(T!=NULL){
		LRN(T->left);
		LRN(T->right);
		cout<<T->data<<" ";
	}
}
//CAC BAI TOAN TREN CAY NHI PHAN
//1_tinh kich thuoc cay nhi phan
int Size(Tree T){
	if(T==NULL)	return 0;
	else return (Size(T->left)+1+Size(T->right));
}
//2_Xac dinh 2 cay nhi phan co giong nhau hay khong
int identicalTrees(Tree T1, Tree T2) {
	if (T1==NULL && T2==NULL)
        return 1;
	if (T1!=NULL && T2!=NULL){
		return (T1->data == T2->data &&
            identicalTrees(T1->left, T2->left) &&
            identicalTrees(T1->right, T2->right));
	}
	return 0;//mot trong 2 cay khac rong
}
//3_tim do cao cay nhi phan
int maxDepth(Tree T) {
	if (T==NULL)
		return -1;
	else {
		int lDepth = maxDepth(T->left);//do cao cay con trai
		int rDepth = maxDepth(T->right);//do cao cay con phai
		if (lDepth > rDepth) 	return lDepth + 1;
		return rDepth + 1;
	}
} 
//4_Cay phan chieu
void mirror(Tree T) {
	if (T==NULL) return;
	else {
		Tree temp;
		mirror(T->left);
		mirror(T->right);
		temp = T->left;
		T->left = T->right;
		T->right = temp;
	}
}
//In 1 mang
void printArray(int path[], int pathLen) {
	for (int i = 0; i < pathLen; i++) {
		cout << path[i] << " ";
	}
	cout << endl;
}

//5_tim duong di tu goc den la
void printPathsRecur(Tree T, int path[], int pathLen)  {
	if (T==NULL) return;
	path[pathLen++] = T->data;//Ghi duong di ban dau tu node
	if (T->left==NULL && T->right==NULL)
		printArray(path, pathLen);//duong di tu node goc den node la
	else {
		//di tiep sang cay ben trai
		printPathsRecur(T->left, path, pathLen);
		// di tiep sang cay ben phai
		printPathsRecur(T->right, path, pathLen);
	}
}
//6_Dem so node la tren cay
int getLeafCount(Tree T) {
	if(T == NULL)
		return 0;
	if(T->left == NULL && T->right==NULL)
		return 1;
	return getLeafCount(T->left) + getLeafCount(T->right);
}
//			10
//		20		30
//	40			50
main(){
	Tree T;
	Init(&T);
	T=MakeNode(10);
	addleft(T,10,20);
	addright(T,10,30);
	T->left->left = MakeNode(40);
	T->left->right = MakeNode(50);
	NLR(T);
	cout << endl;
	LNR(T);
	cout << endl;
	LRN(T);
	cout << endl;
	cout << Size(T);
}