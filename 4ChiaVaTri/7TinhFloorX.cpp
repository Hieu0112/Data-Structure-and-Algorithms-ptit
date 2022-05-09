#include<bits/stdc++.h>
using namespace std;
int search_binary(int *a,int n,int k){
	int left=0;
	int right=n-1;
	if(a[left]>k) return -1;
	if(a[right]<=k) return right+1;
	int mid=(left+right)/2;
	
	while(left<=right){
		if(a[mid]==k) return mid+1;
		if(a[mid]>k) right=mid-1;
		if(a[mid]<k)  left=mid+1;
		mid=(left+right)/2;	 
	}
	return mid+1;
}
main(){
	int t;
	cin>>t;
	while(t--){
		int n,k;
		cin>>n>>k;
		int a[n];
		for(int i=0;i<n;i++)	cin>>a[i];
		cout<<search_binary(a,n,k)<<endl;
	}
}