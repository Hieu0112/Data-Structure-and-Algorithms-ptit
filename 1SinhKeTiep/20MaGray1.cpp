#include<bits/stdc++.h>
using namespace std;
int n,a[20];
void nhap(){
	cin>>n;
}
void xuat(int *a,int n){
	int x[n];
	x[0]=a[0];
	for(int i=n-1;i>0;i--){
	x[i]=a[i];
	if(a[i-1]==1) a[i]=1-a[i];
	}
	for(int i=0;i<n;i++)
	{
	cout<<a[i];
	a[i]=x[i];
	}
	cout<<" ";
}
void solve(int i){
	for(int j=0;j<2;j++){
		a[i]=j;
		if(i==n-1) xuat(a,n);
		else solve(i+1);
	}
}
main(){
	int t;
	cin>>t;
	while(t--){
		nhap();
		solve(0);
		cout<<endl;
	}
}