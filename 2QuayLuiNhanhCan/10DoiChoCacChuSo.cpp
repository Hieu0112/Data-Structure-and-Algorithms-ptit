#include<bits/stdc++.h>
using namespace std;
int k;
string s,maxs;
void solve(int si){
	if(si==0) return ;
	for(int i=0;i<s.size()-1;i++)
	for(int j=i+1;j<s.size();j++){
		if(s[i]<s[j]){
			swap(s[i],s[j]);
			if(s>maxs) 
				maxs=s;
			solve(si-1);
			swap(s[i],s[j]);
		}
	}
}
main(){
	int t;
	cin>>t;
	while(t--){
		cin>>k>>s;
		maxs=s;
		solve(k);
		
		cout<<maxs<<endl;
	}
}