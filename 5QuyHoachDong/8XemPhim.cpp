#include<bits/stdc++.h>
using namespace std;
#define test() int t;cin>>t;while(t--)
#define memset(b,x,size) memset(b,x,sizeof(b))
int C,N,maxs;
int s[25001];
main(){
	maxs=0;
	cin>>C>>N;
	int a[N];
	for(auto &x:a)	cin>>x;
	s[0]=1;
	for(int i=0;i<N;i++)
		for(int j=C;j>=a[i];j--)
			if(s[j-a[i]])	{
				s[j]=1;
				maxs=max(maxs,j);
			}
	cout<<maxs;
}