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
int vs[1001];
string result;
int n,m,u;
vector<int>v[1001];
int a[1001][1001];
void nhap(){
	memset(vs,0,size);
	memset(a,0,size);
	for(int i=0;i<=1000;i++) v[i].clear();
	result="";
	cin>>n>>m>>u;
	for(int i=1;i<=m;i++){
		int x,y;
		cin>>x>>y;
		v[x].push_back(y);
		a[x][y]=1;
	}
}
void DFS_de_quy(int u1){
	vs[u1]=1;
	result=result+to_string(u1)+" ";
	for(auto x:v[u1]){
		if(!vs[x])	
			DFS_de_quy(x);
	}
}
int s[1001];
void DFS_ke(int u1){
	int top=1;
	vs[u1]=1;
	s[top]=u1;
	while(top!=0){
		int v1=s[top];
		int ok=1;
		for(int i=1;i<=n;i++)
			if(!vs[i]&&a[v1][i]){
				top++;
				s[top]=i;
				vs[i]=1;
				result=result+to_string(i)+" ";
				ok=0;
				break;
			}
		if(ok==1) top--;
	}
}
void xuat(){
	cout<<u<<" "<<result<<endl;
}
main(){
	test(){
		nhap();
//		DFS_de_quy(u);
		DFS_ke(u);
		xuat();
	}
}