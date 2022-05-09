#include<bits/stdc++.h>
using namespace std;
#define test() int t;cin>>t;while(t--)
long long Merge(long long a[],int l,int m,int r){
	int n1=m-l+1;
	int n2=r-m;
	int L[n1],R[n2];
	for(int i=0;i<n1;i++)	L[i]=a[l+i];
	for(int i=0;i<n2;i++)	R[i]=a[m+i+1];
	int i=0,j=0,k=l;
	long long res=0;
	while(i<n1&&j<n2){
		if(L[i]<=R[j])	a[k++]=L[i++];
		else{
			a[k++]=R[j++];
			res+=n1-i;
		}
	}
	while(i<n1) a[k++]=L[i++];
	while(j<n2) a[k++]=R[j++];
	return res;
}
long long Merge_sort(long long a[],int l , int r){
	long long res=0;
	if(l<r){
		int m=(l+r)/2;
		res+=Merge_sort(a,l,m);
		res+=Merge_sort(a,m+1,r);
		res+=Merge(a,l,m,r);
	}
	return res;
}
main(){
	test(){
		int n;
		cin>>n;
		long long a[n];
		for(auto &x:a) cin>>x;
		cout<<Merge_sort(a,0,n-1)<<endl;
	}
}