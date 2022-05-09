#include<bits/stdc++.h>
using namespace std;
#define test() int t;cin>>t;while(t--)
#define memset(b,x,size) memset(b,x,sizeof(b))
struct Cap_So{
	int x,y;
};
bool cmp(Cap_So a,Cap_So b){
	return a.x<b.x;
}
main(){
	int dp[101];
	test(){
		memset(dp,0,sizeof(dp));
		int n;
		cin>>n;
		Cap_So a[n];
		for(int i=0;i<n;i++)	cin>>a[i].x>>a[i].y;
		sort(a,a+n,cmp);
		int maxs=0;
		for(int i=1;i<=n;i++){
			dp[i]=1;
			for(int j=1;j<i;j++){
				if(a[i-1].x>a[j-1].y) dp[i]=max(dp[i],dp[j]+1);
				maxs=max(maxs,dp[i]);
			}
		}
		cout<<maxs<<endl;
	}
}
