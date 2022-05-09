#include<bits/stdc++.h>
using namespace std;
#define test() int t;cin>>t;while(t--)
#define memset(b,x,size) memset(b,x,sizeof(b))
int S[1001][1000];
main(){
	int v,n;
	test(){
		cin>>n>>v;
		memset(S,0,size);
		int a[n+1],c[n+1];
		for(int i=1;i<=n;i++) cin>>a[i];
		for(int i=1;i<=n;i++) cin>>c[i];
		
		for(int i=1;i<=n;i++)
			for(int j=1;j<=v;j++){
				S[i][j]=S[i-1][j];
				if(a[i]<=j)
					S[i][j]=max(S[i-1][j],S[i-1][j-a[i]]+c[i]);
			}
		cout<<S[n][v]<<endl;
	}
}