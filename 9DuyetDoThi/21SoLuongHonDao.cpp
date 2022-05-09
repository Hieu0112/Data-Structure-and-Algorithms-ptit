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
int n,m,dem;
int a[1001][1001];
void nhap(){
	memset(a,0,size);
	memset(vs,0,size);
	cin>>n>>m;
	for(int i=1;i<=n;i++)
		for(int j=1;j<=m;j++)
			cin>>a[i][j];
}
void BFS(int u){
	vs[u]=1;
	queue<int>qe;
	qe.push(u);
	while(!qe.empty()){
		int v1=qe.front();
		qe.pop();
		for(int i=1;i<=n;i++){
			if(!vs[i]&&a[v1][i])
			{
				a[v1][i]=0;
				vs[i]=1;
				qe.push(i);
			}
		}
	}
}
int KT_lien_thong_BFS(){
	int dem=0;
	for(int i=1;i<=n;i++)
		for(int j=1;j<=m;j++)
			if(a[i][j]){
				BFS(i);
				BFS(j);
				dem++;
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