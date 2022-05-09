#include<bits/stdc++.h>
using namespace std;
#define test() int t;cin>>t;while(t--)
#define mod 1000000007
long c[1001][1001];
main(){
	c[0][0]=1;
	for(int i=1;i<=1000;i++)
		for(int j=0;j<=i;j++){
			if(j==0||i==j) c[i][j]=1;
			else c[i][j]=(c[i-1][j]+c[i-1][j-1])%mod;
		}
	test(){
		int n,k;
		cin>>n>>k;
		cout<<c[n][k]<<endl;
	}
}