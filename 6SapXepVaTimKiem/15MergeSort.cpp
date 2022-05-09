#include<bits/stdc++.h>
using namespace std;
#define test() int t;cin>>t;while(t--)
void Merge(int *a,int l,int m,int r){
	int n1=m-l+1;
	int n2=r-m;
	int L[n1],R[n2];
	for(int i=0;i<n1;i++) L[i]=a[l+i];
	for(int i=0;i<n2;i++) R[i]=a[m+1+i];
	int i=0,j=0,k=l;
	while(i<n1&&j<n2){
		if(L[i]<=R[j])	a[k++]=L[i++];
		else a[k++]=R[j++];
	}
	while(i<n1)	a[k++]=L[i++];
	while(j<n2)	a[k++]=R[j++];
}
void Merge_sort(int *a,int l,int r){
	if(l<r){
		int m=(l+r)/2;
		Merge_sort(a,l,m);
		Merge_sort(a,m+1,r);
		Merge(a,l,m,r);
	}
}
main(){
	test(){
		int n;
		cin>>n;
		int a[n];
		for(auto &x:a)	cin>>x;
		Merge_sort(a,0,n-1);
		for(auto x:a) cout<<x<<" ";
		cout<<endl;
	}
}
