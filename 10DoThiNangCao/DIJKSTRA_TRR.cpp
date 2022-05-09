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
int a[1001][1001],d[1001],e[1001],vs[1001];
int n,m,s;
void nhap(){
	memset(a,0,size);
	cin>>n>>m>>s;
	for(int i=1;i<=n;i++)
	for(int j=1;j<=n;j++)
		if(i!=j) a[i][j]=32767;
		
	for(int i=1;i<=m;i++){
		int x,y,c;
		cin>>x>>y>>c;
		a[x][y]=c;
	}
}
void Dijkstra(int t){
	memset(vs,0,size);
	for(int v=1;v<=n;v++){
		d[v]=a[s][v];
		e[v]=s;
	}
	d[s]=0;
	e[s]=0;
	vs[s]=1;
	int u,v;
	while(!vs[t]){
	int mins=100;
	for(v=1;v<=n;v++)
		if(!vs[v]&&d[v]<mins){
			u=v;
			mins=d[v];
		}
		cout<<u<<" ";
		vs[u]=1;
	if(!vs[t])
	for(v=1;v<=n;v++)
		if(!vs[v]&&(d[v]>d[u]+a[u][v])){
			d[v]=d[u]+a[u][v];
			e[v]=u;
		}
	}
	cout<<"\nGia Tri: "<<d[t]<<endl;
}
main(){
	test(){
		nhap();
		int x=2;
		while(x<=n){
		cout<<s<<" ";
		Dijkstra(x);
		x++;
	}
	}
}
/*
2
9  12 1

1  2   4

1  8   8

2  3   8

2  8   11

3  4   7

3  6   4

3  9   2

4  5   9

4  6  14

5  6  10

6  7  2

6  9  6
5 8 1
1 2 7
1 3 5
1 4 8
1 5 2
3 2 1
3 4 1
4 2 1
5 4 1
*/