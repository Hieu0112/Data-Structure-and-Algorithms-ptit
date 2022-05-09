#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll n,k;
ll length[100];

//1 2 4 8 16
//vt 1=1 vt2=2 vt4=3 vt8=5
ll solve(ll n,ll k){
	if(k==length[n])	return n;
	else if(k<length[n])	return solve(n-1,k);
	else return solve(n-1,k-length[n]);
}
main(){
	int t;
	cin>>t;
	length[1]=1;
	for (int i = 2;i <= 50 ; i++)
		length[i]=2*length[i-1];
	while(t--){
		cin>>n>>k;
		cout<<solve(n,k)<<endl;;
	}
}