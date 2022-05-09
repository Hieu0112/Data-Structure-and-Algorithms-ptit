#include<bits/stdc++.h>
using namespace std;
#define test() int t;cin>>t;while(t--)
#define memset(b,x,size) memset(b,x,sizeof(b))
#define ll long long
main(){
	ll n,i2=0,i3=0,i5=0;
	ll dp[10001];
	dp[0]=1;
	for(int i=1;i<10001;i++){
		dp[i]=min(dp[i2]*2,min(dp[i3]*3,dp[i5]*5));
		if(dp[i]==dp[i2]*2)	i2++;
		if(dp[i]==dp[i3]*3)	i3++;
		if(dp[i]==dp[i5]*5)	i5++;
	}
	test(){
		cin>>n;
		cout<<dp[n-1]<<endl;
	}
}