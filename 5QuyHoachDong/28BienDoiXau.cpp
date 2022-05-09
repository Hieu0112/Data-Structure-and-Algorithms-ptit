#include<bits/stdc++.h>
using namespace std;
#define test() int t;cin>>t;while(t--)
#define memset(b,x,size) memset(b,x,sizeof(b))
#define mod 1000000007
main(){
//	dp[i][j] cach bien doi i ky tu s1 thanh j ky tu s2
//	dp[0][j] chen j ky tu vao s1 dp[0][j]=j
//	dp[i][0] xoa i ky tu s1 dp[i][0]=i
//	s1[i]==s2[j] giong nhau -> so cach khong doi
//	s1[i]!=s2[j] co 3TH xay ra:
//		thi them vao ca 2 chuoi 1 ky tu
//		chen them 1 ky tu vao xau (i-1)
//		xoa bot 1 ky tu cua i
	int dp[105][105];
	test(){
		string s1,s2;
		cin>>s1>>s2;
		int n=s1.size(),m=s2.size();
		memset(dp,0,size);
		for(int i=0;i<=n;i++)
			for(int j=0;j<=m;j++)
			{
				if(i==0||j==0) dp[i][j]=i+j;
				else if(s1[i-1]==s2[j-1]) dp[i][j]=dp[i-1][j-1];
				else dp[i][j]=min(dp[i-1][j-1],min(dp[i-1][j],dp[i][j-1]))+1;
			}
		cout<<dp[n][m]<<endl;
	}
}