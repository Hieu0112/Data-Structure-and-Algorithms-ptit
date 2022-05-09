#include<bits/stdc++.h>
using namespace std;
#define test() int t;cin>>t;while(t--)
#define ll long long 
vector<ll>mu(31,0);
void solve(){
	mu[0]=1;
	for(int i=1;i<=30;i++)
	mu[i]=2*mu[i-1];
}
ll so(string s){
	int n=s.size();
	ll result=0;
	for(int i=0;i<n;i++)
		result+=(s[i]-'0')*mu[n-1-i];
	return result;
}
ll tich(string s1,string s2){
	ll a=so(s1);
	ll b=so(s2);
	return a*b;
}
main(){
	solve();
	test(){
		string s1,s2;
		cin>>s1>>s2;
		cout<<tich(s1,s2)<<endl;
	}
}