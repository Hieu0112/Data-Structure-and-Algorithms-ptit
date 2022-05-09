#include<bits/stdc++.h>
using namespace std;
main(){
	long t,n,dem,k;
	cin>>t;
	while(t--){
		cin>>n>>k;
		dem=0;
		int a[n];
		for(int i=0;i<n;i++) cin>>a[i];
		sort(a,a+n);
		for(int i=0;i<n;i++){
			int s=lower_bound(a,a+n,k+a[i])-a-i-1;
			if(s>0) dem+=s;
		}
		cout<<dem<<endl;
	}
}