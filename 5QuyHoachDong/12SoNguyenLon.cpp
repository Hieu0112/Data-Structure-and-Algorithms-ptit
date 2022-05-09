#include<bits/stdc++.h>
using namespace std;
#define test() int t;cin>>t;while(t--)
#define memset(b,x,size) memset(b,x,sizeof(b))
int dp[1001][1001];
void solve(string s1,string s2){
	int n=s1.size(),m=s2.size();
	memset(dp,0,sizeof(dp));
	int maxs=0;
	for(int i=1;i<=n;i++)
		for(int j=1;j<=m;j++){
			if(s1[i-1]==s2[j-1])	dp[i][j]=dp[i-1][j-1]+1;
			else dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
			maxs=max(maxs,dp[i][j]);
		}
		cout<<maxs;
}
main(){
	test(){
		string s1,s2;
		cin>>s1>>s2;
		solve(s1,s2);
		cout<<endl;
	}
}