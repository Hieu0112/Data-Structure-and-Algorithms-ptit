#include<bits/stdc++.h>
using namespace std;
long Binary(long a[],long m,long n,long x){
	long left=m,right=n-1;
	long mid=(left+right)/2;
	while(left<right){
		if(a[mid]==x) return mid;
		else if(a[mid]>x) right=mid-1;
		else left=mid+1;
		mid=(left+right)/2; 
	}
	return -1;

}

main(){
	int t;
	cin>>t;
	while(t--){
		long n,k=-1,x;
		cin>>n>>x;
		long a[n];
		for(long i=0;i<n;i++){
		cin>>a[i];
		if(i!=0&&a[i]<a[i-1]&&k==-1) k=i;		
	}
	long x1=Binary(a,0,k,x);
	if(x1!=-1) cout<<x1+1;
	else {
		long x2=Binary(a,k,n,x);
		cout<<x2+1;
	}
	cout<<endl;
	}
}
