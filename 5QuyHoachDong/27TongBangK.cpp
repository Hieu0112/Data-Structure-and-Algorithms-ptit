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
main(){
	test(){
		int n,k;
		cin>>n>>k;
		int a[n];
		for(auto &x:a)	cin>>x;
		int dp[k+1];
		memset(dp,0,size);
		dp[0]=1;
		for(int i=1;i<=k;i++)
			for(int j=0;j<n;j++)
				if(a[j]<=i){
					dp[i]=(dp[i-a[j]]+dp[i])%mod;
				}
		cout<<dp[k]<<endl;
	}
}