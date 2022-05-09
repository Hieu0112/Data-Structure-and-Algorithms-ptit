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
int a[1001][1001];
int n,m,k;
int e[1001],vs[1001];
string s;
void nhap(){
	k=0;
	cin>>n;
	memset(vs,0,size);
	cin.ignore();
	for(int i=1;i<=n;i++){
		getline(cin,s);
		stringstream ss(s);
		int x;
		while(ss>>x)
			a[i][x]=1;
	}
//	for(int i=1;i<=n;i++)
//		for(int j=1;j<=n;j++)
//			cin>>a[i][j];
}
void DFS(int u){
	vs[u]=1;
	e[k++]=u;
	for(int i=1;i<=n;i++){
		if(!vs[i]&&a[u][i])
			DFS(i);
	}
}
void BFS(int u){
	queue<int>qe;
	qe.push(u);
	vs[u]=1;
	while(!qe.empty()){
		int v=qe.front();
		e[k++]=v;
		qe.pop();
		for(int i=1;i<=n;i++){
			if(!vs[i]&&a[v][i]){
				qe.push(i);
				vs[i]=1;
			}
		}
	}
}
void Duyet_cac_dinh_cua_do_thi_DFS(){
	for(int i=1;i<=n;i++)
		if(!vs[i])	DFS(i);
}
void Duyet_cac_dinh_cua_do_thi_BFS(){
	for(int i=1;i<=n;i++)
		if(!vs[i])	BFS(i);
}
void xuat(){
	for(int i=0;i<k;i++)
		cout<<e[i]<<" ";
}
main(){
	nhap();
	Duyet_cac_dinh_cua_do_thi_DFS();
//	Duyet_cac_dinh_cua_do_thi_BFS();
	xuat();
}
/*
10
6 7
8 9 10
4
3

1 7
1 6
2 10
2 10
2 8 9

*/

/*
13
0 1 1 1 0 0 0 0 0 0 0 0 0
1 0 1 1 0 1 0 0 0 0 0 0 0
1 1 0 1 1 0 0 0 0 0 0 0 0
1 1 1 0 0 0 1 0 0 0 0 0 0
0 0 1 0 0 1 1 1 0 0 0 1 0
0 1 0 0 1 0 1 0 0 0 0 1 0
0 0 0 1 1 1 0 1 0 0 0 0 0
0 0 0 0 1 0 1 0 0 0 0 1 0
0 0 0 0 0 0 0 0 0 1 1 0 1
0 0 0 0 0 0 0 0 1 0 1 1 1
0 0 0 0 0 0 0 0 1 1 0 0 1
0 0 0 0 1 1 0 1 0 1 0 0 0
0 0 0 0 0 0 0 0 1 1 1 0 0
*/
