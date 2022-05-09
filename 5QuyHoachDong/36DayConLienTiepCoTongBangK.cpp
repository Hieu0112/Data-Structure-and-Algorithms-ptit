#include<bits/stdc++.h>
using namespace std;
#define test() int t;cin>>t;while(t--)
#define memset(b,x,size) memset(b,x,sizeof(b))
#define ll long long
bool binary(ll a[],ll n,ll k){
	ll l=1,r=n-1;
	while(l<=r){
		ll mid=(l+r)/2;
		if(a[n]-a[mid]==k) return false;
		else if(a[n]-a[mid]>k) l=mid+1;
		else r=mid-1;
	}
	return true;
}
main(){
	test(){
		ll n,k,x,m;
		cin>>n>>k;
		m=n+1;
		ll dp[n+5];
		dp[0]=0;
		bool check=true;
		for(ll i=1;i<=n;i++){
			cin>>x;
			dp[i]=x+dp[i-1];
			if(x==k||dp[i]==k)	check=false;
			if(dp[i]>k&&m>i) m=i;
		}
		if(check)
		for(int i=m;i<=n;i++){
			check=binary(dp,i,k);
			if(!check) break;
		}	
		if(check) cout<<"NO";
		else cout<<"YES";
		cout<<endl;
	}
}
