#include<bits/stdc++.h>
using namespace std;
#define test() int t;cin>>t;while(t--)
long long dp[100][100];
int n,m;
void solve(int n,int m){
	memset(dp,0,sizeof(dp));
	for(int i=0;i<=m;i++) dp[n][i]=1;
	for(int i=0;i<=n;i++) dp[i][m]=1;
	
	for(int i=n;i>=0;i--)
		for(int j=m-1;j>=0;j--)
			dp[i][j]=dp[i+1][j]+dp[i][j+1];
	cout<<dp[0][0]<<endl;
}
main(){
	test(){
		cin>>m>>n;
		solve(n,m);
	}
}
