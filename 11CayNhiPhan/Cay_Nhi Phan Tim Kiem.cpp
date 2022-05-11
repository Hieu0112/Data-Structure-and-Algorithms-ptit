#include <bits/stdc++.h>
using namespace std;

typedef struct node {
	int data;
	node *left;
	node *right;
} *Tree;

void init(Tree *T){
	*T=NULL;
}

Tree getNode(){
	Tree p;
	p=new node;
	return p;
}

int isEmpty(Tree *T){
	if(*T==NULL)
		return 1;
	return 0;
}
Tree makeNode(int x){
	Tree  p;
	p = getNode();
	p->data = x;
	p->left=NULL;
	p->right=NULL;
	return p;
}
Tree oldSearch(Tree T,  int  x) {
	Tree p;
	if( T->data==x)
		return T; 
	if(T==NULL)
		return NULL;
	p = oldSearch(T->left, x);
	if ( p ==NULL)
		p = oldSearch(T->right,x);
	return p;
}

Tree search(Tree T, int x){
	Tree p = T;
	if ( p!=NULL ) { 
		if (x < T->data)
			p = search(T->left, x);
		else
			p = search(T->right, x);
	}
	return(p);
}

Tree search2(Tree T, int x){
	Tree p = T;
	while (p!=NULL) {
		if (x == p->data)
			return p;
		else if (x < p->data) {
			p = p -> left;
		}
		else p = p -> right;
	}
	return p;
}

Tree makeRoot(Tree T, int x){
	if(T==NULL) {
		T = makeNode(x);
	}
	return T;
}

Tree addNode(Tree T, int x) {
    if (T == NULL) {
		T = makeNode(x);
    } else if (x > T->data) {
        T->right = addNode(T->right, x);
    } else {
        T->left = addNode(T->left, x);
    }
    return T;
}
 
Tree rotateLeft(Tree T) {
	Tree p = T;
	if (T == NULL) 
		return p;
	else if (T -> right == NULL) 
		return p; //cant rotate
	else {
		p = T->right;
		T -> right = p->left;
		p -> left = T;
	}
	return p;
}

Tree rotateRight (Tree T ) {
	Tree p = T;
	if (T==NULL) 
		return p;
	else if (T -> left == NULL) 
		return p; //Cant rotate
	else { 
		p = T -> left;
		T -> left = p ->right;
		p -> right = T;
	}
	return p;
}

void NLR(Tree T) {
	if (T != NULL) { 
		cout << T->data << " ";
		NLR(T->left);
		NLR(T->right);
	}
}

void LNR(Tree T) {
	if (T != NULL) {
		LNR(T->left);
		cout << T->data << " ";
		LNR(T->right);
	}
}


void LRN(Tree T) {
	if (T != NULL) { 
		LRN(T->left);
		LRN(T->right);
		cout << T->data << " ";
	}
}

int size(Tree T) {
	if (T==NULL) 
		return 0;
	else return(size(T->left) + 1 + size(T->right));
}

int identicalTrees(Tree T1, Tree T2) {
	if (T1==NULL && T2==NULL)
        return 1;
	if (T1!=NULL && T2!=NULL){
		return (T1->data == T2->data &&
            identicalTrees(T1->left, T2->left) &&
            identicalTrees(T1->right, T2->right));
	}
	return 0;
}

int maxDepth(Tree T) {
	if (T==NULL)
		return -1;
	else {
		int lDepth = maxDepth(T->left);
		int rDepth = maxDepth(T->right);
		if (lDepth > rDepth) {
			return lDepth + 1;
		}
		return rDepth + 1;
	}
} 


unsigned int getLeafCount(Tree T) {
	if(T == NULL)
		return 0;
	if(T->left == NULL && T->right==NULL)
		return 1;
	return getLeafCount(T->left) + getLeafCount(T->right);
}

int main() {
	Tree T;
	init(&T);
	T = makeRoot(T, 40);
	addNode(T, 30);
	addNode(T, 60);
	addNode(T, 25);
	addNode(T, 35);
	addNode(T, 50);
	addNode(T, 70);
	addNode(T, 65);
	addNode(T, 90);
	addNode(T, 62);
	addNode(T, 68);
	T = rotateLeft(T);
//	T = rotateRight(T);
	NLR(T);
	cout << endl;
	LNR(T);
	cout << endl;
	LRN(T);
	cout << endl;
	cout << size(T);
}