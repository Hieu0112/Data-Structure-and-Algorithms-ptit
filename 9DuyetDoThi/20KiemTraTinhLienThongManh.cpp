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
int n,m,K,check;
void nhap(){
	K=0,check=0;
	memset(vs,0,size);
	memset(a,0,size);
	for(int i=1;i<=1000;i++)	v[i].clear();
	cin>>n>>m;
	for(int i=1;i<=m;i++){
		int x,y;
		cin>>x>>y;
		v[x].push_back(y);
//		v[y].push_back(x);
		a[x][y]=1;
//		a[y][x]=1;
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
void Kiem_Tra_Tinh_lien_thong_manh(){
	for(int i=1;i<=n;i++){
//		DFS_PTIT(i);
//		DFS_TRR(i);
		BFS_PTIT(i);
//		BFS_TRR(i);
		int lt=0;
		for(int j=1;j<=n;j++)
			if(!vs[j]){
				check=3;
				return;
			}
		K++;
		}
	if(K==n){
		check=1;
		return ;
	}
}
void Kiem_Tra_Tinh_lien_thong_yeu(){
	for(int i=1;i<=n;i++){
		for(auto x:v[i]){
			v[x].push_back(i);
			a[x][i]=1;
		}
	}
	memset(vs,0,size);
//		DFS_PTIT(1);
//		DFS_TRR(1);
		BFS_PTIT(1);
//		BFS_TRR(1);
	for(int i=1;i<=n;i++)
		if(!vs[i])	{
		check=0;
		return ;
	}
	check=2;
}			
main(){
	test(){
		nhap();
		Kiem_Tra_Tinh_lien_thong_manh();
		if(check==3)
			Kiem_Tra_Tinh_lien_thong_yeu();
		if(check!=1) cout<<"NO";
		else cout<<"YES";
		cout<<endl;
	}
}
/*
2

6 9 

1 2 2 4 3 1 3 2 3 5 4 3 5 4 5 6 6 3

6 9
1 2
2 3
2 4
2 5
3 1
4 3
4 5
5 6
6 4
*/