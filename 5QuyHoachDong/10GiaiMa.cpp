#include<bits/stdc++.h>
using namespace std;
#define test() int t;cin>>t;while(t--)
//si=0 dp[i]=dp[i-1]	'i-1'+'i'
//s[i-1]==1 thi si luon ghep vao duoc so cach la dp[i-1]
//s[i-1]=2 s[i-2]<7
//dp[i] so cach ma hoa den ky tu i                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                
main(){
	int dp[100];
	test(){
		string s;
		cin>>s;
		if(s[0]=='0') cout<<0;
		else{
			memset(dp,0,sizeof(dp));
			dp[0]=1;
			dp[1]=1;
			int n=s.size();
			for(int i=2;i<=n;i++)
			{
				if(s[i-1]>'0')	dp[i]=dp[i-1];
				if(s[i-2]=='1'||(s[i-2]=='2'&&s[i-1]<='6'))	dp[i]+=dp[i-2];
			}
			cout<<dp[n];
		}
		cout<<endl;
	}
}
