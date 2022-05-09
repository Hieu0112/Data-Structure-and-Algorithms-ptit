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
vector<int>v[1001];
int n,m,dem;
int a[1001][1001];
void nhap(){
	memset(a,0,size);
	memset(vs,0,size);
//	for(int i=0;i<=1000;i++)	v[i].clear();
	cin>>n>>m;
	for(int i=1;i<=m;i++){
		int x,y;
		cin>>x>>y;
//		v[x].push_back(y);
//		v[i].push_back(x);
		a[x][y]=1;
		a[y][x]=1;
	}
}
void DFS_De_quy(int u){
	vs[u]=1;
	for(int i=1;i<=n;i++)
		if(!vs[i]&&a[u][i])
			DFS_De_quy(i);
}
void BFS_queue(int u){
	vs[u]=1;
	queue<int>qe;
	qe.push(u);
	while(!qe.empty()){
		int v1=qe.front();
		qe.pop();
		for(int i=1;i<=n;i++)
		if(!vs[i]&&a[v1][i])
		{
			vs[i]=1;
			qe.push(i);
		}
	}
}
int q[1001];
void BFS_NX(int u){
	memset(q,0,size);
	int dq=1,cq=1,v1;
	q[cq]=u;
	while(dq<=cq){
		v1=q[dq++];
		for(int i=1;i<=n;i++)
			if(!vs[i]&&a[v1][i]){
				q[++cq]=i;
				vs[i]=1;
			}
	}
}
int KT_lien_thong_DFS(){
	DFS_De_quy(1);
	for(int i=1;i<=n;i++)	if(!vs[i])	return 0;
	return 1; 
}
int KT_lien_thong_BFS(){
//	BFS_NX(1);
	BFS_queue(1);
	for(int i=1;i<=n;i++)	if(!vs[i])	return 0;
	return 1; 
}
main(){
	test(){
		nhap();
//		cout<<KT_lien_thong_DFS();
		cout<<KT_lien_thong_BFS();
	}
}