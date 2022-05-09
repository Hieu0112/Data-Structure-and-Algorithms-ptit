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
int n,m,u,res;
vector<int>v[1001];
string result;
int a[1001][1001],e[1001];
void nhap(){
	result="";
	memset(a,0,size);
	memset(e,0,size);
	memset(vs,0,size);
	for(int i=0;i<=1000;i++)	v[i].clear();
	cin>>n>>m>>u>>res;
	for(int i=1;i<=m;i++){
		int x,y;
		cin>>x>>y;
		v[x].push_back(y);
		a[x][y]=1;
	}
}
//void BFS_canh(int u){
//	queue<int>qe;
//	vs[u]=1;
//	qe.push(u);
//	while(!qe.empty()){
//		int v1=qe.front();
//		qe.pop();
//		for(auto x:v[v1]){
//			if(!vs[x])
//			{
//				vs[x]=1;
//				qe.push(x);
//			}
//		}
//	}
//}
void BFS_canh(int u){
	queue<int>qe;
	vs[u]=1;
	qe.push(u);
	while(!qe.empty()){
		int v1=qe.front();
		qe.pop();
		for(int i=1;i<=n;i++){
			if(!vs[i]&&a[v1][i])
			{
				e[i]=v1;
				vs[i]=1;
				qe.push(i);
			}
		}
	}
}
int q[1001];
void BFS_ke_ngan_xep(int u){
	int v1,dq=1;
	int cq=1;
	q[cq]=u;
	vs[u]=1;
	while(dq<=cq){
		v1=q[dq];
		dq++;
		for(int i=1;i<=n;i++){
			if(!vs[i]&&a[v1][i]){
				cq++;
				e[i]=v1;
				q[cq]=i;
				vs[i]=1;
			}
		}
	}
}
void xuat(){
	int dinh=res;
	while(dinh>0){
		result=to_string(dinh)+" "+result;
		dinh=e[dinh];
	}
	cout<<result;
}
main(){
	test(){
		nhap();
		BFS_canh(u);
//		BFS_ke_ngan_xep(u);
		if(vs[res])
			xuat();
		else cout<<-1;
		cout<<endl;
	}
}