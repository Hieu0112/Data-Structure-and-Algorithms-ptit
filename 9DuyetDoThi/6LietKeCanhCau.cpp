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
int vs[1001],a[1001][1001];
vector<int>v[1001];
vector<pair<int,int>>M;
int n,m,I,K;
void nhap(){
	M.clear();
	memset(vs,0,size);
	memset(a,0,size);
	for(int i=0;i<=1000;i++)	v[i].clear();
	cin>>n>>m;
	for(int i=1;i<=m;i++){
		int x,y;
		cin>>x>>y;
		M.push_back({x,y});
		v[x].push_back(y);
		v[y].push_back(x);
		a[x][y]=1;
		a[y][x]=1;
	}
}
void DFS_PTIT(int u){
	vs[u]=1;
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
		if(!vs[i]&&a[u][i])
			DFS_TRR(i);
}
void BFS_TRR(int u){
	vs[u]=1;
	queue<int>qe;
	qe.push(u);
	while(!qe.empty()){
		int v1=qe.front();
		qe.pop();
		for(int i=1;i<=n;i++){
			if(!vs[i]&&a[v1][i])
			{
				vs[i]=1;
				qe.push(i);
			}
		}
	}
}
int Dem_TP_lien_thong(){
	int lt=0;
	for(int i=1;i<=n;i++){
		if(!vs[i]){
			lt++;
			DFS_PTIT(i);
//			DFS_TRR(i);
//			BFS_PTIT(i);
//			BFS_TRR(i);
		}
	}
	return lt;
}
void Canh_cau_PTIT(){
	for(int i=1;i<=m;i++){
		memset(vs,0,size);
		for(int x=0;x<=n;x++)	v[x].clear();
		for(int j=1;j<=m;j++){
			if(i!=j){
				v[M[j-1].first].push_back(M[j-1].second);
				v[M[j-1].second].push_back(M[j-1].first);
			}
		}
		I=Dem_TP_lien_thong();
		if(I>K) {
			cout<<min(M[i-1].first,M[i-1].second)<<" ";
			cout<<max(M[i-1].first,M[i-1].second)<<" ";
		}
	}
}
void Canh_cau_TRR(){
	for(int i=1;i<=m;i++){
		memset(vs,0,size);
		a[M[i-1].first][M[i-1].second]=0;
		a[M[i-1].second][M[i-1].first]=0;
		I=Dem_TP_lien_thong();
		a[M[i-1].first][M[i-1].second]=1;
		a[M[i-1].second][M[i-1].first]=1;
		if(I>K) {
			cout<<min(M[i-1].first,M[i-1].second)<<" ";
			cout<<max(M[i-1].first,M[i-1].second)<<" ";
		}
	}
}
main(){
	test(){
		nhap();
		K=Dem_TP_lien_thong();
		Canh_cau_PTIT();
//		Canh_cau_TRR();
		cout<<endl;
	}
}
