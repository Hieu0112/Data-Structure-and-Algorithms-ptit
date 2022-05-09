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
	for(int i=0;i<=1000;i++)	v[i].clear();
	cin>>n>>m;
	for(int i=1;i<=m;i++){
		int x,y;
		cin>>x>>y;
		v[x].push_back(y);
		v[y].push_back(x);
		a[x][y]=1;
		a[y][x]=1;
	}
}
void DFS(int u){
	vs[u]=1;
	for(auto x:v[u])
		if(!vs[x])
			DFS(x);
}
void BFS(int u){
	queue<int>qe;
	qe.push(u);
	vs[u]=1;
	while(!qe.empty()){
		int v1=qe.front();
		qe.pop();
		for(auto x:v[v1]){
			if(!vs[x])
			{
				qe.push(x);
				vs[x]=1;
			}
		}
	}
}
void DFS_De_quy(int u){
	vs[u]=1;
	for(int i=1;i<=n;i++)
		if(!vs[i]&&a[u][i])
			DFS_De_quy(i);
}
int q[1001];
void BFS_NX(int u){
	memset(q,0,size);
	int v1,cq=1,dq=1;
	q[cq]=u;
	vs[u]=1;
	while(dq<=cq){
		v1=q[dq++];
		for(int i=1;i<=n;i++)
		if(!vs[i]&&a[v1][i]){
			vs[i]=1;
			q[++cq]=i;
		}
	}
}
int KT_lien_thong_DFS(){
	int dem=0;
	for(int i=1;i<=n;i++)	
		if(!vs[i]){
			dem++;
			DFS_De_quy(i);
//			DFS(i);
	}
	return dem; 
}
int KT_lien_thong_BFS(){
	int dem=0;
	for(int i=1;i<=n;i++)	
		if(!vs[i]){
			dem++;
			BFS_NX(i);
//			BFS(i);
	}
	return dem;
}
main(){
	test(){
		nhap();
//		cout<<KT_lien_thong_DFS();
		cout<<KT_lien_thong_BFS();
		cout<<endl;
	}
}