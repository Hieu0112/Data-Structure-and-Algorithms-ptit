#include<bits/stdc++.h>
using namespace std;
#define ll long long
void nhap(ll *a,int n){
	for(int i=1;i<=n;i++) 	cin>>a[i];
}
int search_binary(ll *a,ll*b,int n){
	int left=1;
	int right=n;
	int mid=(left+right)/2;
	while(left<=right){
		if(a[left]!=b[left]) return left;
		if(a[mid]==b[mid]) left=mid+1;
		if(a[mid]!=b[mid]) right=mid-1;
		mid=(left+right)/2;	 
	}
	return mid+1;
}
main(){
	int t,n,k;
	cin>>t;
	while(t--){
		cin>>n;
		ll a[n+1],b[n];
		nhap(a,n);
		nhap(b,n-1);
		cout<<search_binary(a,b,n)<<endl;
	}
}