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
int n,m,u,res;
vector<int>v[1001];
int vs[1001];
//int a[1001][1001];
//int s[1001];
void nhap(){
	for(int i=0;i<=1000;i++)	v[i].clear();
//	memset(a,0,size);
//	memset(s,0,size);
	cin>>n>>m;
	for(int i=1;i<=m;i++){
		int x,y;
		cin>>x>>y;
		v[x].push_back(y);
		v[y].push_back(x);
//		a[x][y]=1;
//		a[y][x]=1;
	}
}
void DFS(int us){
	vs[us]=1;
	for(auto x:v[us])
		if(!vs[x]){
		DFS(x);	
	}
}
//void DFS_de_quy_Ke(int us){
//	vs[us]=1;
//	for(int vss=1;vss<=n;vss++)
//		if(!vs[vss]&&a[us][vss]){
//		DFS_de_quy_Ke(vss);	
//	}
//}
//void DFS_Ngan_Xep(int us){
//	int top=1;
//	s[top]=us;
//	vs[u]=1;
//	while(top!=0){
//		int vss=s[top];
//		int ok=1;
//		for(int i=1;i<=n;i++)
//			if(!vs[i]&&a[vss][i]){
//				top++;
//				s[top]=i;
//				vs[i]=1;
//				ok=0;
//				break;
//			}
//		if(ok) top--;
//	}
//}
main(){
	test(){
		nhap();
		int so;
		cin>>so;
		while(so--){
			memset(vs,0,size);
			cin>>u>>res;
//			DFS_de_quy_Ke(u);
//			DFS_Ngan_Xep(u);
			DFS(u);
			if(vs[res])		cout<<"YES";
			else 	cout<<"NO";
			cout<<endl;
		}
	}
}