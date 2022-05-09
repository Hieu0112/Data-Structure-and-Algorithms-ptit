#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define test() int t;cin>>t;while(t--)
ll n,k;
ll length[100];
char solve(ll n,ll k){
	if(n<=2) return 'A'-1+n;
	else if(k<=length[n-2]) return solve(n-2,k);
	else return solve(n-1,k-length[n-2]);
}
main(){
	length[1]=1;
	length[2]=1;
	for (int i=3;i<94;i++)
		length[i]=length[i-1]+length[i-2];
	test(){
		cin>>n>>k;
		cout<<solve(n,k)<<endl;
	}
}