#include<bits/stdc++.h>
using namespace std;
#define test() int t;cin>>t;while(t--)
#define memset(b,x,size) memset(b,x,sizeof(b))
int dp[501][501];
int n,m,maxs;
main(){
	test(){
		maxs=0;
		memset(dp,0,size);
		cin>>n>>m;
		int a[n][m];
		for(int i=0;i<n;i++)
		for(int j=0;j<m;j++)	cin>>a[i][j];
		
		for(int i=0;i<m;i++) dp[0][i]=a[0][i];
		for(int i=0;i<n;i++) dp[i][0]=a[i][0];
		
		for(int i=1;i<n;i++)
			for(int j=1;j<m;j++){
				if(a[i][j]){
					dp[i][j]=min(dp[i-1][j-1],min(dp[i-1][j],dp[i][j-1]))+1;
					maxs=max(maxs,dp[i][j]);
				}
			}
		cout<<maxs<<endl;
	}
}