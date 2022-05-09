#include<bits/stdc++.h>
using namespace std;
#define test() int t;cin>>t;while(t--)
#define faster() ios_base::sync_with_stdio(false);\
				cin.tie(NULL);\
				cout.tie(NULL);
#define memset(b,x,size) memset(b,x,sizeof(b))
#define mod 1000000007
#define PQ priority_queue<long long, vector<long long>, greater<int>>
#define ll long long
void solve(int n,int x,int y,int z){
	int dp[n+1];
	dp[1]=x;
	for(int i=2;i<=n;i++)
		if(i%2==0)	dp[i]=min(dp[i/2]+z,dp[i-1]+x);
		else{
			dp[i]=min(dp[i-1]+x,min(dp[i/2]+x+z,dp[i/2+1]+y+z));
		}
	cout<<dp[n]<<endl;
}
main(){
	test(){
		int x,y,z,n;
		cin>>n>>x>>y>>z;
		solve(n,x,y,z);
	}
}