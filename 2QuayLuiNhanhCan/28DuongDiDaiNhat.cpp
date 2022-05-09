#include<bits/stdc++.h>
using namespace std;
map<pair<int,int>,int>e;
int vs[30];
vector<int>v[30];
int n,m,t,maxs;

//1 2 co the ve 2 1

void nhap(){
	cin>>n>>m;
	maxs=0;
	e.clear();
	vs[30]={};
	for(int i=0;i<30;i++)	v[i].clear();
	
	for(int i=0;i<m;i++){
		int x,y;
		// x,y la vi tri 2 dinh cua 1 doan thang
		cin>>x>>y;
		e.insert({{x,y},0});//chua di qua
		e.insert({{y,x},0});//chua di qua
		
		v[x].push_back(y);//gan vao v de DFS dinh x
		v[y].push_back(x);//gan vao v de DFS ding y
	}
}
void DFS(int u,int dem){
	vs[u]=1;// vi tri chua di qua
	maxs=max(maxs,dem);
	
	for(auto s:v[u]){
		if(e[{s,u}]==0){
			e[{s,u}]=e[{u,s}]=1;
			DFS(s,dem+1);
			e[{s,u}]=e[{u,s}]=0;
		}
	}
}
main(){
	cin>>t;
	while(t--){
		nhap();
		for(int i=0;i<n;i++)	DFS(i,0);
		cout<<maxs<<endl;
	}
}