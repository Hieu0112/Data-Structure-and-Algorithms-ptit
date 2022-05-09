#include<bits/stdc++.h>
using namespace std;
int t,n,k,a[30],c[30],l;
bool check;
void nhap(){
	l=1;
	check=true;
	cin>>n>>k;
	for(int i=1;i<=n;i++)
	cin>>a[i];
	sort(a+1,a+n+1);
}
void xuat(int *c,int xs){
	cout<<"[";
	for(int i=1;i<xs;i++)
	cout<<c[i]<<" ";
	cout<<c[xs]<<"]";
	check=false;
}
void solve(int x,int s,int l){
	if(s+a[x]>k) return ;
	for(int j=x;j<=n;j++){
		c[l]=a[j];
		if(s+a[j]==k) xuat(c,l);
		else solve(j,s+a[j],l+1);
	}	
}
main(){
	cin>>t;
	while(t--){
	nhap();
	solve(1,0,1);
	if(check) cout<<"-1";
	cout<<endl;
	}
}