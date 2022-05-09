#include<bits/stdc++.h>
using namespace std;
int d[300];
main(){
	int t,k;
	cin>>t;
	string s;
	while(t--){
		cin>>k;
		memset(d,0,sizeof(d));
		cin>>s;
		int maxs=0,n=s.size()+1;
		for(int i=0;i<s.size();i++)
		{
			d[s[i]]++;
//			maxs=max(maxs,d[s[i]]);
		maxs=*max_element(d,d+'z');
		}
		if(maxs>n/k) cout<<-1;
		else cout<<1;
		cout<<endl;
	}
}