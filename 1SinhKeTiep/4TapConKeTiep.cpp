#include<bits/stdc++.h>
using namespace std;
main()
{
	int n,k,t;
	cin>>t;
	while(t--)
	{
		cin>>n>>k;
		int a[k];
		for(int i=0;i<k;i++) cin>>a[i];
		
		int j=0,ns=k-1;
		while (ns>=0){
        if (a[ns]!=n-j)
            break;
        j+=1;
        ns-=1;
    }
//		while(a[k-1-j]==n-j){
//			j++;
//			if(j==k) break;
//		}
//		if(j!=k){
//		a[k-j-1]++;
	if(ns>=0){
		a[ns]++;
		for(int i=ns+1;i<k;i++) a[i]=a[i-1]+1;
		
		for(int i=0;i<k;i++) cout<<a[i]<<" ";
		cout<<endl;
		}
		else {
			for(int i=1;i<=k;i++)
			cout<<i<<" ";
			cout<<endl;
		}
	 } 
 } 

