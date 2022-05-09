#include<bits/stdc++.h>
using namespace std;
long NP(long k,long*a,long n)
{
	long bg=0;
	long ed=n-1;
	long mid=(bg+ed)/2;
	while(bg<=ed){
		if(a[mid]==k) return mid;
		else if (a[mid]>k) ed=mid-1;
		else bg=mid+1; 
		mid=(bg+ed)/2;
	}
	return -1;
}
main(){
	long n,k,t;
	cin>>t;
	while(t--){
		cin>>n>>k;
		long a[n+1];
		for(long i=0;i<n;i++)
		cin>>a[i];
		long vt=NP(k,a,n);
		if(vt==-1) cout<<"NO";
		else cout<<vt+1;
		cout<<endl;
	}
}