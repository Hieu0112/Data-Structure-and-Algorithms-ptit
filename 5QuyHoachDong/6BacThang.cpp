#include<bits/stdc++.h>
using namespace std;
#define test() int t;cin>>t;while(t--)
#define memset(b,x,size) memset(b,x,sizeof(b))
#define mod 1000000007
long ss[100001];
main(){
	test(){
		int n,k;
		memset(ss,0,size);
		cin>>n>>k;
		ss[0]=1;
		for(int i=1;i<=n;i++)
			for(int j=1;j<=k;j++){
				if(i>=j)	ss[i]=(ss[i]+ss[i-j])%mod;
				else break;
			}
		cout<<ss[n]<<endl;
	}
}
