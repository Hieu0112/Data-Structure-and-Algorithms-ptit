#include<bits/stdc++.h>
using namespace std;
#define test() int t;cin>>t;while(t--)
#define memset(b,x,size) memset(b,x,sizeof(b))
int dp[1001][1001];
main(){
	string s;
	test(){
		memset(dp,0,size);
		cin>>s;
		int n=s.size();
		int res=1;
		for(int i=0;i<n;i++)	dp[i][i]=1;
		
		for(int i=1;i<n;i++)
			for(int j=0;j<n-i;j++){
				int k=i+j;
				if(s[j]==s[k])	{
					if(i==1) dp[j][k]=1;
					else
					dp[j][k]=dp[j+1][k-1];
				}
				else dp[j][k]=0;
				if(dp[j][k]) res=max(res,k-j+1);
			}
		cout<<res<<endl;
	}
}