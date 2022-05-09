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
//void BFS_1(int us){
//	queue<int>qe;
//	qe.push(us);
//	vs[us]=1;
//	while(!qe.empty()){
//		int v1=qe.front();
//		qe.pop();
//		s1+=to_string(v1)+" ";
//		for(auto i:v[v1]){
//			if(!vs[i]){
//				qe.push(i);
//				vs[i]=1;
//			}
//		}
//	}
//}
int q[1001];
void BFS_Ngan_Xep(int us){
	memset(q,0,size);
	int v1,dq=1,cq=1;
	q[cq]=us;
	vs[us]=1;
	while(dq<=cq){
		v1=q[dq];
		dq++;
		s1+=to_string(v1)+" ";
		for(int i=1;i<=n;i++)
			if(!vs[i]&&a[v1][i])
			{
				cq++;
				q[cq]=i;
				vs[i]=1;
			}
	}
}
void xuat(){
	cout<<s1<<endl;
}
main(){
	test(){
		nhap();
//		BFS_1(u);
		BFS_Ngan_Xep(u);
		xuat();
	}
}