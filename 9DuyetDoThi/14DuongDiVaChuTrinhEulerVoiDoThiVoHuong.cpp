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
int n,m,kt,dinh=1;
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
void Lien_thong_PTIT(){
	kt=2;
	DFS_PTIT(1);
	for(int i=1;i<=n;i++)	if(!vs[i]){
		kt=0;
		return ;
	}
}
void Bac_PTIT(){
	int dem=0;
	for(int i=1;i<=n;i++)
		if(v[i].size()%2!=0){
			dem++;
			if(dem==1)	{
				dinh=i;
				kt=1;
			}
			if(dem>2){
				kt=0;
				return ;
			}
		}
}
void DK_euler_PTIT(){
	Lien_thong_PTIT();
	if(kt==2)	Bac_PTIT();
}
// TRR
void Lien_thong_TRR(){
	kt=2;
	DFS_TRR(1);
	for(int i=1;i<=n;i++)	if(!vs[i]){
		kt=0;
		return ;
	}
}
void Bac_TRR(){
	int dems=0;
	for(int i=1;i<=n;i++)
	{
		int dem=0;
		for(int j=1;j<=n;j++)
		if(a[i][j]==1)	dem++;
		if(dem%2!=0){
		dems++;
		if(dems==1){
			dinh=i;
			kt=1;
		}
		if(dems>2){
			kt=0;
			return;
		}
	}
	}
}
void DK_euler_TRR(){
	Lien_thong_TRR();
	if(kt==2)	Bac_TRR();
}
main(){
	test(){
		nhap();
//		DK_euler_PTIT();
		DK_euler_TRR();
		cout<<kt<<endl;
	}
}
