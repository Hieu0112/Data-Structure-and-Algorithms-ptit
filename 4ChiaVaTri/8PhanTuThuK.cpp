#include<bits/stdc++.h>
using namespace std;
void nhap(int *a,int n){
	for(int i=1;i<=n;i++) 	cin>>a[i];
}
int search_binary(int *a,int n,int k){
	int left=1;
	int right=n;
	if(right==k) return a[right];
	int mid=(left+right)/2;
	while(left<=right){
		if(mid==k) return a[mid];
		if(mid>k) right=mid-1;
		if(mid<k)  left=mid+1;
		mid=(left+right)/2;	 
	}
	return a[mid];
}
main(){
	int t;
	cin>>t;
	while(t--){
		int n,m,k;
		cin>>n>>m>>k;
		int a[n+1],b[m+1];
		nhap(a,n);
		nhap(b,m);
		int kq[n+m+1];
		for(int i=1;i<=n;i++)	kq[i]=a[i];
		for(int i=n+1;i<=n+m;i++)	kq[i]=b[i-n];
		sort(kq+1,kq+n+m+1);
		cout<<search_binary(kq,n+m,k)<<endl;
	}
}