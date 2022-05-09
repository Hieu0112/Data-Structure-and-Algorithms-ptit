#include<bits/stdc++.h>
using namespace std;
#define test() int t;cin>>t;while(t--)
#define memset(b,x,size) memset(b,x,sizeof(b))
main(){
	string s1,s2;
	int dp[101][101];
	test(){
		cin>>s1;
		memset(dp,0,size);
		s2=s1;
		reverse(s1.begin(),s1.end());
		int maxs=0;
		for(int i=1;i<=s1.size();i++)
			for(int j=1;j<=s1.size();j++)	
				{
					if(s1[i-1]==s2[j-1]) dp[i][j]=max(dp[i][j],dp[i-1][j-1]+1);
					else dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
					maxs=max(maxs,dp[i][j]);
				}
		cout<<s1.size()-maxs<<endl;
	}
}
