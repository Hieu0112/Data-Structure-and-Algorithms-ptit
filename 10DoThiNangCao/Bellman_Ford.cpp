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
int a[101][101],d[101],e[101];
int n,m,s;
void nhap(){
	memset(a,0,size);
	cin>>n>>m>>s;
	for(int i=1;i<=n;i++)
	for(int j=1;j<=n;j++)
		if(i!=j)	
		a[i][j]=32767;
		
	for(int i=1;i<=m;i++){
		int x,y,c;
		cin>>x>>y>>c;
		a[x][y]=c;
	}
}
void Bellman_Ford(){
	for(int v=1;v<=n;v++){
		d[v]=a[s][v];
		e[v]=s;
	}
	d[s]=0;
	for(int k=1;k<=n-2;k++){
		for(int v=1;v<=n;v++)
			for(int u=1;u<=n;u++)
				if(d[v]>d[u]+a[u][v]){
					d[v]=d[u]+a[u][v];
					e[u]=v;
				}
			}
}
void result(int F){
	if(d[F]==32767)	cout<<"NO";
	else{
		int t=s;
		while(F!=t){
			cout<<t<<" ";
			t=e[t];
		}
	}
	cout<<endl;
}
main(){
	test(){
		nhap();
		Bellman_Ford();
		int cs=1;
		cout<<e[1]<<" "<<e[2]<<" "<<e[3]<<" "<<e[4]<<endl;	
//		result(1);
//		while(cs<=n){
//		result(cs);
//		cs++;
//		}
	}
}
/*
2
4 5 1
1 2 4
2 3 -2
1 3 3
4 1 -1
3 4 2
*/