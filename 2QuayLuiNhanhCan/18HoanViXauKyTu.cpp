#include<bits/stdc++.h>
using namespace std;
int a[20];
bool ok[20]={};
int n;
string arr;
void nhap(){
	cin>>arr;
	n=arr.size();
}
void xuat(int *a,int n){
	for(int i=1;i<=n;i++)
	cout<<arr[a[i]-1];
	cout<<" ";
}
void solve(int j){
	for(int i=1;i<=n;i++)
	if(!ok[i]){
		ok[i]=true;
		a[j]=i;
		if(j==n) xuat(a,n);
		else solve(j+1);
		ok[i]=false;
	}
}
main(){
	int t;
	cin>>t;
	while(t--){
		nhap();
		solve(1);
		cout<<endl;
	}
}