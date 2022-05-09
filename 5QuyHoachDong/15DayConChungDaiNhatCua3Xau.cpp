#include<bits/stdc++.h>
using namespace std;
#define test() int t;cin>>t;while(t--)
#define memset(b,x,size) memset(b,x,sizeof(b))
int dp[101][101][101];
int n,m,p;
string s1,s2,s3;
void nhap(){
	cin>>n>>m>>p;
	cin>>s1>>s2>>s3;
}
void solve(string s1,string s2,string s3)
{
	memset(dp,0,size);
	int maxs=0;
	for(int i=1;i<=n;i++)
		for(int j=1;j<=m;j++)
			for(int k=1;k<=p;k++)
			{
				if(s1[i-1]==s2[j-1]&&s2[j-1]==s3[k-1]) dp[i][j][k]=dp[i-1][j-1][k-1]+1;
				else dp[i][j][k]=max(dp[i-1][j][k],max(dp[i][j-1][k],dp[i][j][k-1]));
				maxs=max(maxs,dp[i][j][k]);
			}
	cout<<maxs;
}
main(){
	test(){
		nhap();
		solve(s1,s2,s3);
		cout<<endl;
	}
}