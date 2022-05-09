#include<bits/stdc++.h>
using namespace std;
int Day_Con[1001][1001];
void solve(string a,string b){
	memset(Day_Con,0,sizeof(Day_Con));
	int n=a.size(),m=b.size();
	int maxs=0;
	for(int i=1;i<=n;i++)
		for(int j=1;j<=m;j++){
			if(a[i-1]==b[j-1]) Day_Con[i][j]=Day_Con[i-1][j-1]+1;
			else Day_Con[i][j]=max(Day_Con[i][j-1],Day_Con[i-1][j]);
			maxs=max(maxs,Day_Con[i][j]);
		}
	cout<<maxs;
}
main(){
	int t;
	cin>>t;
	while(t--){
		string s1,s2;
		cin>>s1>>s2;
		solve(s1,s2);
		cout<<endl;
	}
}