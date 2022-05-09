#include<bits/stdc++.h>
using namespace std;
main(){
	int t,n,mod=1e9+7,sum;
	cin>>t;
	while(t--){
		sum=0;
		cin>>n;
		int a[n];
		for(auto &x:a) cin>>x;
		sort(a,a+n);
		for(int i=0;i<n;i++)
			sum=(sum+(a[i]*i)%mod)%mod;
		cout<<sum<<endl;
	}
}