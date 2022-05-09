#include<bits/stdc++.h>
using namespace std;
vector<vector<int>>arr;
vector<int> arrs;
int a[30],n,k,t;
void nhap(){
	arr.clear();
	arrs.clear();
	cin>>n>>k;
	for(int i=1;i<=n;i++)
	cin>>a[i];
	sort(a+1,a+n+1);
}
void solve(int x,int s,vector<int>arrs){
	if(s+a[x]>k) return ;
	for(int i=x;i<=n;i++){
		arrs.push_back(a[i]);
		if(s+a[i]==k) arr.push_back(arrs);
		else solve(i,s+a[i],arrs);
		arrs.pop_back();
	}
}
main(){
	cin>>t;
	while(t--){
		nhap();
		solve(1,0,arrs);
		if(arr.size()<1) cout<<"-1";
		else{
			cout<<arr.size()<<" ";
			for(int i=0;i<arr.size();i++){
				cout<<"{";
				for(int j=0;j<arr[i].size()-1;j++) cout<<arr[i][j]<<" ";
				
				cout<<arr[i][arr[i].size()-1]<<"} ";
			}
		}
		cout<<endl;
	}
}