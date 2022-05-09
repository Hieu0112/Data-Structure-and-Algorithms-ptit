#include<bits/stdc++.h>
using namespace std;
#define test() int t;cin>>t;while(t--)
int a[1000],b[1000],n,m;
void nhap(int a[],int n){
	for(int i=0;i<n;i++)
	cin>>a[i];
}

main(){
	test(){
	cin>>n>>m;
	nhap(a,n);
	nhap(b,m);
	vector<vector<int>>kq,sum,kqs;
	vector<int>as,ps;
	for(int i=m-1;i>=0;i--){
		as.clear();
		for(int j=n-1;j>=0;j--){
			as.push_back(b[i]*a[j]);
		}
		kq.push_back(as);
	}
	int h;
	for(int i=0;i<m;i++){
		h=i;
		while(h--)
		kq[i].insert(kq[i].begin(),0);
	}
	for(int i=1;i<m;i++){
	for(int j=0;j<kq[i].size();j++)
	if(j<kq[i-1].size()) kq[i][j]+=kq[i-1][j];
	}
	for(int i=kq[m-1].size()-1;i>=0;i--)
	cout<<kq[m-1][i]<<" ";
	cout<<endl;
	}
}
