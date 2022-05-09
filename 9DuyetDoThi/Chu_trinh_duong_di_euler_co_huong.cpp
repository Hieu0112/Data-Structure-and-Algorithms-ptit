#include<bits/stdc++.h>
using namespace std;
#define test() int t;cin>>t;while(t--)
#define memset(b,x,size) memset(b,x,sizeof(b))
int vs[101],a[101][101];
int n,m,kt,dinh;
void nhap(){
	dinh=1;
	memset(vs,0,size);
	memset(a,0,size);
	cin>>n;
//	for(int i=1;i<=n;i++)
//	for(int j=1;j<=n;j++)
//	cin>>a[i][j];
	string s;
	cin.ignore();
	for(int i=1;i<=n;i++){
		getline(cin,s);
		stringstream ss(s);
		int x;
		while(ss>>x)
			a[i][x]=1;
	}
//	cin>>n>>m;
//	for(int i=1;i<=m;i++){
//		int x,y;
//		cin>>x>>y;
//		a[x][y]=1;
//	}
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
				kt=2;
				dinh=i;
			}
		}
	}
}
void DK_euler_TRR(){
	Lien_thong_TRR();
	if(kt==1)	Bac_TRR();
}
int CE[101],s[101];
void Tim_chu_trinh_or_duong_di_NX(){
	int top=1;
	int v1,k=0;
	s[top]=dinh;
	while(top>0){
		v1=s[top];
		int ok=1;
		for(int i=1;i<=n;i++)
			if(a[v1][i]){
				top++;
				s[top]=i;
				ok=0;
				a[v1][i]=a[i][v1]=0;
				break;
			}
		if(ok){
			CE[k++]=v1;
			top--;
		}
	}
	for(int i=k-1;i>=0;i--)	cout<<CE[i]<<" ";
}
void Tim_chu_trinh_or_duong_di_st(){
	stack<int>st;
	st.push(dinh);
	int v1,k=0;
	while(!st.empty()){
		v1=st.top();
		bool ok=true;
		for(int i=1;i<=n;i++)
			if(a[v1][i]){
				st.push(i);
				ok=false;
				a[v1][i]=0;
				break;
			}
		if(ok){
			CE[k++]=v1;
			st.pop();
		}
	}
	for(int i=k-1;i>=0;i--) cout<<CE[i]<<" ";
}
main(){
	test(){
	nhap();
	DK_euler_TRR();
	cout<<kt<<endl;
//	if(kt!=0)	Tim_chu_trinh_or_duong_di_NX();
	if(kt!=0)	Tim_chu_trinh_or_duong_di_st();
	cout<<endl;
	}
}
/*
2
10
4
3 5
4 8
2 10
6
2
1
9
10
3 7

10
4
3 5 7
4 8
2 10
6
2
1
9
10
3 7

*/

