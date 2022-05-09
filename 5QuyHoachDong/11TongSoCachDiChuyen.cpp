#include<bits/stdc++.h>
using namespace std;
#define test() int t;cin>>t;while(t--)
#define memset(b,x,size) memset(b,x,sizeof(b))
#define mod 1000000007
int n,k,S[100001];
main(){
	test(){
		memset(S,0,size);
		cin>>n>>k;
		S[0]=1;
		for(int i=1;i<=n;i++)
			for(int j=1;j<=min(k,i);j++)
				S[i]=(S[i]+S[i-j])%mod;
		cout<<S[n]<<endl;
	}
}