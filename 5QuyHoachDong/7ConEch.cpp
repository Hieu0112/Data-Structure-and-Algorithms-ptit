#include<bits/stdc++.h>
using namespace std;
#define test() int t;cin>>t;while(t--)
#define memset(b,x,size) memset(b,x,sizeof(b))
long s[1009],n;
main(){
	test(){
		memset(s,0,size);
		cin>>n;
		s[0]=1;
		for(int i=1;i<=n;i++)
			for(int j=1;j<=3;j++)	
				if(i>=j)	s[i]+=s[i-j];
				else break;
		cout<<s[n]<<endl;
	}
}
