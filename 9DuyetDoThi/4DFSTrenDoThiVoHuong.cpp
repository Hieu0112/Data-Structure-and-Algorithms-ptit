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
int n,m,u;
vector<int>v[1001];
int vs[1001];
int a[1001][1001];
string s1;
int s[1001];
void nhap(){
	for(int i=0;i<=1000;i++)	v[i].clear();
	memset(vs,0,size);
	memset(a,0,size);
	memset(s,0,size);
	cin>>n>>m>>u;
	s1="";
	for(int i=1;i<=m;i++){
		int x,y;
		cin>>x>>y;
		v[x].push_back(y);
		v[y].push_back(x);
		a[x][y]=1;
		a[y][x]=1;
	}
}
void DFS_de_quy_1(int us){
	vs[us]=1;
	s1=s1+to_string(us)+" ";
	for(auto x:v[us]){
		if(!vs[x])	DFS_de_quy_1(x);
	}
}
void DFS_de_quy_Ke(int us){
	vs[us]=1;
	s1=s1+to_string(us)+" ";
	for(int vss=1;vss<=n;vss++)
		if(!vs[vss]&&a[us][vss])	
		DFS_de_quy_Ke(vss);	
}
void DFS_Ngan_Xep(int us){
	int top=1;
	s[top]=us;
	vs[u]=1;
	while(top!=0){
		int vss=s[top];
		int ok=1;
		for(int i=1;i<=n;i++)
			if(!vs[i]&&a[vss][i]){
				top++;
				s[top]=i;
				s1=s1+to_string(i)+" ";
				vs[i]=1;
				ok=0;
				break;
			}
		if(ok) top--;
	}
}
void xuat(){
	cout<<u<<" "<<s1<<endl;
}
main(){
	test(){
		nhap();
//		DFS_de_quy_1(u);
//		DFS_de_quy_Ke(u);
		DFS_Ngan_Xep(u);
		xuat();
	}
}