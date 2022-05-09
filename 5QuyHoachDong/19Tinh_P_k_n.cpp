#include<bits/stdc++.h>
using namespace std;
#define test() int t;cin>>t;while(t--)
#define memset(b,x,size) memset(b,x,sizeof(b))
#define mod 1000000007
#define ll long long
main(){
	test(){
		int n,k;
		cin>>n>>k;
		long long res=1;
		if(k>n) res=0;
		for(int i=n-k+1;i<=n;i++)
			res=(res*i)%mod;
		cout<<res<<endl;
	}
}