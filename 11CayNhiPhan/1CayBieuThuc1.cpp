#include<bits/stdc++.h>
using namespace std;
#define test() int t;cin>>t;while(t--)
#define faster() ios_base::sync_with_stdio(false);\
				cin.tie(NULL);\
				cout.tie(NULL);
#define memset(b,x,size) memset(b,x,sizeof(b))
#define mod 1000000007
#define PQ priority_queue<long long, vector<long long>, greater<int>>
#define ll long long
struct node{
	char key;
	node *left;
	node *right;
//	Tao 1 node co key la x
	node(char x){
		this->key=x;
		left=right=NULL;
	}
};
//in tu trai sang phai
void in_TREE(node *root){
	if(root==NULL)	return;
	//de quy den key cuoi ben trai 
	in_TREE(root->left);
	cout<<root->key;
	in_TREE(root->right);
}
bool isOperator(char c){
	if(c=='+'||c=='-'||c=='*'||c=='/'||c=='^') return true;
	return false;
}
void Tree(string s){
	stack<node*>st;
	for(auto x:s){
		if(isOperator(x)){
			node *h=new node(x);
			h->right=st.top();st.pop();
			h->left=st.top();st.pop();
			st.push(h);
		}
		else st.push(new node(x));
	}
	in_TREE(st.top());
}
main(){
	string s;
	test(){
		cin>>s;
		Tree(s);
		cout<<endl;
	}
}