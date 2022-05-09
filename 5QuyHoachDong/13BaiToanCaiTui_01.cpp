#include<bits/stdc++.h>
using namespace std;
#define test() int t;cin>>t;while(t--)
#define memset(b,x,size) memset(b,x,sizeof(b))
int dp[1001][1001];
main(){
	test(){
		int n,v;
		memset(dp,0,size);
		cin>>n>>v;
		int a[n+1],c[n+1];
		for(int i=1;i<=n;i++)	cin>>a[i];
		for(int i=1;i<=n;i++)	cin>>c[i];
		for(int i=1;i<=n;i++)
			for(int j=1;j<=v;j++){
				dp[i][j]=dp[i-1][j];
				if(a[i]<=j)	
					dp[i][j]=max(dp[i-1][j],dp[i-1][j-a[i]]+c[i]);
			}
			cout<<dp[n][v]<<endl;
		}
}