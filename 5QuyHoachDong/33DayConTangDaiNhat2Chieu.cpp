#include<bits/stdc++.h>
using namespace std;
#define memset(b,x,size) memset(b,x,sizeof(b))
struct Cap_So{
	long long x,y;
};
main(){
	long long n,maxs=0;
	cin>>n;
	Cap_So a[n];
	long long dp[n+1];
	memset(dp,0,sizeof(dp));
	for(long long i=0;i<n;i++)	cin>>a[i].x>>a[i].y;
	for(long long i=1;i<=n;i++){
		dp[i]=1;
		for(long long j=1;j<i;j++){
			if(a[i-1].x>a[j-1].x&&a[i-1].y>a[j-1].y) dp[i]=max(dp[i],dp[j]+1);
			maxs=max(maxs,dp[i]);
		}
	}
	cout<<maxs;
}
