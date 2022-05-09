#include<bits/stdc++.h>
using namespace std;
int a[1001],res[1001];
int n,k,mins=2000,sums=0;
void nhap(){
	cin>>n;
	for(int i=0;i<n;i++) {
	cin>>a[i];
	sums+=a[i];	
	mins=min(mins,a[i]);
	}
}
int sumss(int *res,int n){
	int s=0;
	for(int i=0;i<n;i++)
		s+=res[i];
	return s;
}
//a[i]=18
//k=3
//x=5
void create(int *res,int n,int k){
	for(int i=0;i<n;i++){
		int x=1;
		while(x<=a[i]/2){
			if(a[i]-k*x<0) break;
			if(a[i]-k*x<x){
				res[i]=x;
				break;
			}
			x++;
		}
	}
}
bool check(int *res,int n){
	for(int i=0;i<n;i++) 
		if(res[i]==0)	return false;
	return true;
}
main(){
	nhap();
	int k=mins/2;
	while(k>=1){
		memset(res,0,sizeof(res));
		create(res,n,k);
		if(check(res,n)) {
			sums=min(sums,sumss(res,n));
			break;
			}
		k--;
	}
	cout<<sums;
}