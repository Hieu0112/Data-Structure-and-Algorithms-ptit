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
int vs[1001],a[1001][1001],vt[1001];
vector<int>v[1001];
int n,m,I,K;
void nhap(){
	memset(vs,0,size);
	memset(a,0,size);
	memset(vt,0,size);
	for(int i=1;i<=1000;i++)	v[i].clear();
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
void DFS_PTIT(int u){
	vs[u]=1;
	if(!vt[u])//Bo Qua Canh Cua u
	for(auto x:v[u])
		if(!vs[x])
			DFS_PTIT(x);
}
void BFS_PTIT(int u){
	vs[u]=1;
	queue<int>qe;
	qe.push(u);
	while(!qe.empty()){
		int v1=qe.front();
		qe.pop();
		if(!vt[v1])
		for(auto x:v[v1]){
			if(!vs[x])
			{
				vs[x]=1;
				qe.push(x);
			}
		}
	}
}
void DFS_TRR(int u){
	vs[u]=1;
	for(int i=1;i<=n;i++)
		if(!vs[i]&&a[u][i]&&!vt[i])
			DFS_TRR(i);
}
void BFS_TRR(int u){
	vs[u]=1;
	queue<int>qe;
	qe.push(u);
	while(!qe.empty()){
		int v1=qe.front();
		qe.pop();
		if(!vt[v1])
		for(int i=1;i<=n;i++){
			if(!vs[i]&&a[v1][i])
			{
				vs[i]=1;
				qe.push(i);
			}
		}
	}
}
int Dem_TP_lien_thong(int j){
	int lt=0;
	for(int i=1;i<=n;i++){
		if(!vs[i]&&!vt[i]){
			lt++;
//			DFS_PTIT(i);
//			DFS_TRR(i);
//			BFS_PTIT(i);
			BFS_TRR(i);
		}
	}
	return lt;
}
void Dinh_tru(){
	for(int i=1;i<=n;i++){
		memset(vs,0,size);
		vt[i]=1;
		I=Dem_TP_lien_thong(i);
		if(I>K) cout<<i<<" ";
		vt[i]=0;
	}
}
main(){
	test(){
		nhap();
		K=Dem_TP_lien_thong(0);
		Dinh_tru();
		cout<<endl;
	}
}
