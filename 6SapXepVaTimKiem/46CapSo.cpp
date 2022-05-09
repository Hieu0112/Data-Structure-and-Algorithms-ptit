#include<bits/stdc++.h>
using namespace std;
#define test() int t;cin>>t;while(t--)
int Merge(int a[],int l,int m,int r){
	int countss=0;
	int n1=m-l+1;
	int n2=r-m;
	int L[n1],R[n2];
	for(int i=0;i<n1;i++) L[i]=a[i+l];
	for(int i=0;i<n2;i++) R[i]=a[i+m+1];
	int i=0,j=0,k=l;
	while(i<n1&&j<n2){
		if(L[i]<=R[j])	a[k++]=L[i++];
		else {
		a[k++]=R[j++];
		countss+=n1-i;
	}
	}
	while(i<n1)	a[k++]=L[i++];
	while(j<n2)	a[k++]=R[j++];
	return countss;
}
int Merge_sort(int a[],int l,int r){
	int counts=0;
	if(l<r){
		int m=(l+r)/2;
		counts+=Merge_sort(a,l,m);
		counts+=Merge_sort(a,m+1,r);
		counts+=Merge(a,l,m,r);
	}
	return counts;
}
main(){
	int n,x=0;
	cin>>n;
	int a[n],b[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
		if(a[i]%2==0) b[x++]=a[i];
	}
	int counts=Merge_sort(b,0,x-1);
	for(int i=0;i<n-1;i++)
		if(a[i]%2==0)
			for(int j=i+1;j<n;j++){
				if(a[j]%2==0)
				{
					if(a[i]>a[j])	counts--;
				}
				else break;
			}
	cout<<counts;
}
