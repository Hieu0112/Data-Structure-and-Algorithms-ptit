#include<bits/stdc++.h>
using namespace std;
#define test() int t;cin>>t;while(t--)
#define memset(b,x,size) memset(b,x,sizeof(b))
int dp[1000005];
main(){
	int n;
	test(){
		memset(dp,0,size);
		cin>>n;
		int a[n];
		for(auto &x:a)	cin>>x;
		dp[0]=a[0];
		dp[1]=max(dp[0],a[1]);
		for(int i=2;i<n;i++)
			dp[i]=max(dp[i-2]+a[i],dp[i-1]);
		cout<<dp[n-1]<<endl;
	}
}
