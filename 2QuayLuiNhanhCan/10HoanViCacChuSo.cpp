#include<bits/stdc++.h>
using namespace std;
int n,k,a[20];
bool OK[20]={};
string arr[20];
int mins=1e9;
int kq[20];
void nhap(){
	cin>>n>>k;
	for(int i=1;i<=n;i++)
	cin>>arr[i];
}
void xuat(){
	for(int i=1;i<=n;i++){
		string s="";
		for(int j=1;j<=k;j++){
			s+=arr[i][a[j]-1];
		}
		kq[i]=stoi(s);
	}
	sort(kq+1,kq+n+1);
	mins=min(mins,kq[n]-kq[1]);
}
void Solve(int i){
	for(int j=1;j<=k;j++){
		if(!OK[j]){
			OK[j]=true;
			a[i]=j;
			if(i==k) xuat();
			else Solve(i+1);
			OK[j]=false;
		}
	}
}
main(){
	nhap();
	Solve(1);
	cout<<mins;
}