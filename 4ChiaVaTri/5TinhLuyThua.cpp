#include<bits/stdc++.h>
using namespace std;
long long mod=1e9+7;
long long lt(long long a,long long b){
	if(b==0) return 1;
	long long x=lt(a,b/2)%mod;
	if(b%2==0) return (x*x)%mod;
	return (a*((x*x)%mod))%mod;
}
main(){
	long long a,b;
	while(true){
		cin>>a>>b;
		a%=mod;
		if(a==0&&b==0) break;
		cout<<lt(a,b)<<endl;
	}
}