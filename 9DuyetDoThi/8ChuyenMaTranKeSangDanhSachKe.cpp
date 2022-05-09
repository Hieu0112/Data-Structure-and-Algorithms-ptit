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
int a[1001][1001];
int n;
void nhap(){
	for(int i=0;i<=1000;i++)	v[i].clear();
	cin>>n;
	for(int i=1;i<=n;i++)
		for(int j=1;j<=n;j++){
			cin>>a[i][j];
			if(a[i][j])	v[i].push_back(j);
		}
}
void xuat(){
	for(int i=1;i<=n;i++){
		if(v[i].size()!=0){
			for(auto x:v[i])	cout<<x<<" ";
			cout<<endl;
		}
	}
}
main(){
	nhap();
	xuat();
}