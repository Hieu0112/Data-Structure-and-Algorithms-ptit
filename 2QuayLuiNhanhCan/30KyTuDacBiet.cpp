#include<bits/stdc++.h>
using namespace std;
char sk;
void solve(string ss,long long n){
	long long m=ss.size();
	if(m>n) {
		sk=ss[n];
		return ;
	}
	while(m*2<=n)	m*=2;
	if(m==n) return solve(ss,n-1);
	return solve(ss,n-m-1);
}
main(){
	int t;
	cin>>t;
	while(t--){
		string s;
		long long N;
		cin>>s;
		cin>>N;
		solve(s,N-1);
		cout<<sk<<endl;
	}
}