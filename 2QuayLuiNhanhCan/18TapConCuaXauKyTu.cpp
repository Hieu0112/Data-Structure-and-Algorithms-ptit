#include<bits/stdc++.h>
using namespace std;
int n,t;
string s;
vector<string>arr;
int a[20];
void nhap(){
	arr.clear();
	cin>>n;
	cin>>s;
}
void Cong(){
	string sa="";
	for(int i=0;i<n;i++)
	if(a[i]==1){
		sa+=s[i];
	}
	if(sa.size()>=1)
	arr.push_back(sa);
}
void solve(int k){
	for(int j=0;j<2;j++){
		a[k]=j;
		if(k==n-1) Cong();
		else solve(k+1);
	}
}
main(){
	cin>>t;
	while(t--){
		nhap();
		solve(0);
		sort(arr.begin(),arr.end());
		for(int i=0;i<arr.size();i++)
		cout<<arr[i]<<" ";
		cout<<endl;
	}
}
