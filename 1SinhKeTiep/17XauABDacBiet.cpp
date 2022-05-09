#include<bits/stdc++.h>
using namespace std;
int n,k,a[10001],dem,s=0;
string s1[10001];
int h=0;
void nhap(){
	cin>>n>>k;
}
void xuat(int *a,int n){
	int j=0;
	for(int i=0;i<n;i++)
	if(a[i]==0) {
	j=i;
	dem=0;
	for(int i=j;j<n;j++)
	if(a[j]==0) dem++;
	else break;
	i+=dem;
	if(dem==k) break;
	}
	if(dem==k){
		string m="";
		s++;
		for(int i=0;i<n;i++)
		m+=char(a[i]+'A');
		s1[h++]=m;
	}
}
void solve(int i){
	for(int j=0;j<2;j++)
	{
		a[i]=j;
		if(i==n-1) xuat(a,n);
		else solve(i+1);
	}
}
main(){
	nhap();
	solve(0);
	cout<<s<<endl;
	for(int i=0;i<h;i++)
	cout<<s1[i]<<endl;
}