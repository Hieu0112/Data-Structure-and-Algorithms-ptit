//#include<bits/stdc++.h>
//using namespace std;
//#define test() int t;cin>>t;while(t--)
//#define faster() ios_base::sync_with_stdio(false);\
//				cin.tie(NULL);\
//				cout.tie(NULL);
//#define memset(b,x,size) memset(b,x,sizeof(b))
//#define mod 1000000007
//#define PQ priority_queue<long long, vector<long long>, greater<int>>
//#define ll long long
//int vs[1001];
//vector<int>v[1001],ke[1001];
//int n,m,kt;
//void nhap(){
//	memset(vs,0,size);
//	for(int i=1;i<=1000;i++){
//		v[i].clear();
//		ke[i].clear();
//	}	
//	cin>>n>>m;
//	for(int i=1;i<=m;i++){
//		int x,y;
//		cin>>x>>y;
//		v[x].push_back(y);
//		v[y].push_back(x);
//		ke[x].push_back(y);
//	}
//}
//void DFS_PTIT(int u){
//	vs[u]=1;
//	for(auto x:v[u])
//		if(!vs[x])
//			DFS_PTIT(x);
//}
//void Lien_thong_PTIT(){
//	kt=1;
//	DFS_PTIT(1);
//	for(int i=1;i<=n;i++)	if(!vs[i]){
//		kt=0;
//		return ;
//	}
//}
//void Bac_PTIT(){
//	for(int i=1;i<=n;i++)
//	{
//		int bb_ra=ke[i].size();
//		int bb_vao=0;
//		for(int j=1;j<=n;j++){
//			for(auto x:ke[j])
//				if(x==i) bb_vao++;
//		}
//		if(bb_ra!=bb_vao){
//				kt=0;
//				break;
//		}
//	}
//}
//void DK_euler_PTIT(){
//	Lien_thong_PTIT();
//	if(kt==1)	Bac_PTIT();
//}
//main(){
//	test(){
//		nhap();
//		DK_euler_PTIT();
//		cout<<kt<<endl;
//	}
//}
#include<bits/stdc++.h>
using namespace std;
#define test() int t;cin>>t;while(t--)
#define memset(b,x,size) memset(b,x,sizeof(b))
int vs[1001],a[1001][1001];
int n,m,kt,dinh;
void nhap(){
	dinh=1;
	memset(vs,0,size);
	memset(a,0,size);
	cin>>n>>m;
	for(int i=1;i<=m;i++){
		int x,y;
		cin>>x>>y;
		a[x][y]=1;
	}
}
void DFS_TRR(int u){
	vs[u]=1;
	for(int i=1;i<=n;i++)
		if(!vs[i]&&(a[u][i]||a[i][u]))
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
			if(!vs[i]&&(a[v1][i]||a[i][v1]))
			{
				vs[i]=1;
				qe.push(i);
			}
		}
	}
}
void Lien_thong_TRR(){
	kt=1;
	BFS_TRR(1);
	for(int i=1;i<=n;i++)	if(!vs[i]){
		kt=0;
		return ;
	}
}
void Bac_TRR(){
	int dem=0;
	for(int i=1;i<=n;i++)
	{
		int bb_vao=0;
		int bb_ra=0;
		for(int j=1;j<=n;j++){
			if(a[i][j]) bb_ra++;
			if(a[j][i]) bb_vao++;
		}
		if(bb_vao!=bb_ra){
			dem++;
			if(dem>2) {
				kt=0;
				return ;
			}
			if(bb_ra>bb_vao){
				kt=0;
				dinh=i;
			}
		}
	}
}
void DK_euler_TRR(){
	Lien_thong_TRR();
	if(kt==1)	Bac_TRR();
}
main(){
	test(){
	nhap();
	DK_euler_TRR();
	cout<<kt<<endl;
	}
}

