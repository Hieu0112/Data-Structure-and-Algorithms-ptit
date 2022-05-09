#include<bits/stdc++.h>
using namespace std;
#define test() int t;cin>>t;while(t--)
int dp[1001];
void Solve(int *a,int n){
	int maxs=0;
	memset(dp,0,sizeof(dp));
	for(int i=0;i<n;i++)
	{
		dp[i]=a[i];
		for(int j=0;j<i;j++)
		{
			if(a[i]>a[j])
				dp[i]=max(dp[i],dp[j]+a[i]);
		}
		maxs=max(maxs,dp[i]);
	}
	cout<<maxs<<endl;
}
main(){
	test(){
	int n;
	cin>>n;
	int a[n];
	for(auto &x:a) cin>>x;
	Solve(a,n);
}
}