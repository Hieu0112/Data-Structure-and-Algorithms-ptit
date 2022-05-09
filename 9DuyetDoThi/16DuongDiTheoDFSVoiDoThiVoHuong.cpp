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
int e[1001];
int n,m,u,v1;
void nhap(){
	memset(vs,0,size);
	memset(e,0,size);
	for(int i=0;i<=1000;i++)	v[i].clear();
	cin>>n>>m>>u>>v1;
	for(int i=1;i<=m;i++){
		int x,y;
		cin>>x>>y;
		v[x].push_back(y);
		v[y].push_back(x);
	}
}
void DFS(int u){
	vs[u]=1;
	for(auto x:v[u]){
		if(!vs[x]&&!vs[v1]){
			DFS(x);
			e[x]=u;
		}
	}
}
void xuat(){
	string result="";
	int dinh=v1;
	while(dinh!=0){
		result=to_string(dinh)+" "+result;
		dinh=e[dinh];
	}
	cout<<result;
}
main(){
	test(){
		nhap();
		DFS(u);
		if(vs[v1])	
			xuat();
		else cout<<-1;
		cout<<endl;
	}
}