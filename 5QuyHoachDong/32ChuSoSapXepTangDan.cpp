#include<bits/stdc++.h>
using namespace std;
#define test() int t;cin>>t;while(t--)
#define memset(b,x,size) memset(b,x,sizeof(b))
#define mod 1000000007
#define ll long long
ll dp[101][101];
void solve(){
	//i : So co i chu so
	//j : xet dau so la j
	for(int i=1;i<=9;i++)		dp[1][i]=1;
	dp[1][0]=10;
	for(int i=2;i<=100;i++){
		dp[i][9]=1;
		dp[i][0]=1;
		for(int j=8;j>=1;j--)	{
		dp[i][j]=(dp[i-1][j]+dp[i][j+1])%mod;
		dp[i][0]=(dp[i][0]+dp[i][j])%mod;
		}
		dp[i][0]=(dp[i-1][0]+dp[i][0])%mod;
	}
}
main(){
	solve();
	test(){
		int n;
		cin>>n;
		cout<<dp[n][0]<<endl;
	}
}