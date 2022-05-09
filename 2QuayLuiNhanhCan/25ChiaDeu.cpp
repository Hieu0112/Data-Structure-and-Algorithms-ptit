#include<bits/stdc++.h>
using namespace std;
int a[21],n,k,dem;
void nhap(){
	dem=0;
	cin>>n>>k;
	a[0]=0;
	int x;
	for(int i=1;i<=n;i++){
		cin>>x;
		a[i]=a[i-1]+x;
	}
}
void search(int s,int begin,int end,int ks){
	if(begin>end||ks==0) return ;
	if(ks==1){
		if(a[end]-a[begin-1]==s) dem++;
		return ;
	}
	else {
		for(int i=begin;i<=end;i++)
		if(s==a[i]-a[begin-1])
		search(s,i+1,end,ks-1);
	}
}
main(){
		nhap();
		if(k==1) dem=1;
		else for(int i=1;i<n;i++)
		search(a[i],i+1,n,k-1);
		cout<<dem;
}