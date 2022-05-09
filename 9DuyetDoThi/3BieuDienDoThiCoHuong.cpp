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
vector<int>v[1001];
int n,m;
void nhap(){
	cin>>n>>m;
	for(int i=0;i<n+1;i++)	v[i].clear();
	for(int i=1;i<=m;i++){
		int x,y;
		cin>>x>>y;
		v[x].push_back(y);
	}
}
void xuat(){
	for(int i=1;i<=n;i++){
		cout<<i<<": ";
		for(auto x:v[i])	cout<<x<<" ";
		cout<<endl;
	}
}
main(){
	test(){
		nhap();
		xuat();
	}
}
