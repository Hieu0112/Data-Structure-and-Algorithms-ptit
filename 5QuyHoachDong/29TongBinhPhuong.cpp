#include<bits/stdc++.h>
using namespace std;
#define test() int t;cin>>t;while(t--)
#define memset(b,x,size) memset(b,x,sizeof(b))
#define ll long long
main(){
	test(){
		int n;
		cin>>n;
		ll dp[n+1];
		//dp[i] la so cach it nhat de phan tich so i thanh cac so nho hon ma co tong binh phuong bang n
		for(int i=0;i<=n;i++)	dp[i]=i;
		for(int i=1;i<=n;i++)
			for(int j=1;j<=sqrt(i);j++)
				dp[i]=min(dp[i],dp[i-j*j]+1);
//				i=i-j*2+j*2
		cout<<dp[n]<<endl;
		}
}