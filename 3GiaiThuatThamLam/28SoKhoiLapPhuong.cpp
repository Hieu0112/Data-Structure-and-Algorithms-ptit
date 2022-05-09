#include<bits/stdc++.h>
using namespace std;
#define test() int t;cin>>t;while(t--)
map<long long,bool>Lap_Phuong;
int a[20],res,n;
vector<int>arr;
void nhap(){
	res=-1;
	arr.clear();
	string s;
	cin>>s;
	n=s.size();
	for(int i=0;i<n;i++)
		arr.push_back(s[i]-'0');
}
void check(){
	long long ans=0;
	for(int i=0;i<n;i++)
		if(a[i])	ans=ans*10+arr[i];
	if(Lap_Phuong[ans]&&ans>res&&ans!=0)	res=ans; 	
}
void solve(int i){
	for(int j=0;j<2;j++){
		a[i]=j;
		if(i==n-1) check();
		else solve(i+1);
	}
}
main(){
	for(int i=1;i<=100;i++)
		Lap_Phuong[i*i*i]=true;
	test(){
		nhap();
		solve(0);
		cout<<res<<endl;
	}
}