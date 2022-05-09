#include<bits/stdc++.h>
using namespace std;
#define test() int t;cin>>t;while(t--)
#define ll long long
vector<ll>a;
void Trung_Tam(ll n){
	int t=0;
	ll mu=1;
	while(n/2>0){
		t++;
		if(t==1){
			a.push_back(2);
			mu=2;
		}
		else {
			mu*=2;
			a.push_back(mu);
		}
		n/=2;
	}
}
ll val(ll k,ll n,ll pos){
	if(k%2==1) return 1;
	if(k<a[pos])	return val(k,n/2,pos-1);
	else if(k==a[pos]) return n%2;
	else if(k>a[pos]) return val(2*a[pos]-k,n/2, pos-1);
}
main(){
	ll n,l,r,res;
	test(){
		res=0;
		cin>>n>>l>>r;
		a.clear();
		Trung_Tam(n);
		for(ll i=l;i<=r;i++)
			res+=val(i,n,a.size()-1);
		cout<<res<<endl;
	}
}
