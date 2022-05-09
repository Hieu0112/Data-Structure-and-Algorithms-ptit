#include<bits/stdc++.h>
using namespace std;
#define test() int t;cin>>t;while(t--)
#define ll long long
main(){
	ll res,n;
	string s;
	test(){
		res=0;
		cin>>s;
		n=s.size();
		for(ll i=0;i<n;i++){
			ll x=0;
			for(ll j=i;j<n;j++){
				x=x*10+s[j]-'0';
				res+=x;
			}
	}
	cout<<res<<endl;
	}
}