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
string s;
int n;
vector<int>v[51];
void nhap(){
	cin>>n;
	cin.ignore();
	for(int i=1;i<=n;i++){
		v[i].clear();
		getline(cin,s);
		stringstream ss(s);
		int x;
		while(ss>>x){
			if(x>i)	v[i].push_back(x);
		}
	}
}
void xuat(){
	for(int i=1;i<=n;i++){
		if(v[i].size()>0){
			for(auto x:v[i])	cout<<i<<" "<<x<<endl;
		}
	}
}
main(){
	nhap();
	xuat();
}