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
int a[1001][1001];
string s;
int n;
void nhap(){
	cin>>n;
	memset(a,0,size);
	cin.ignore();
	for(int i=1;i<=n;i++){
		getline(cin,s);
		stringstream ss(s);
		int x;
		while(ss>>x)
			a[i][x]=1;
	}
}
void xuat(){
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++)
			cout<<a[i][j]<<" ";
	cout<<endl;
	}
}
main(){
	nhap();
	xuat();
}