//#include<bits/stdc++.h>
//using namespace std;
//char kq(long long n,long long k){
//	long long x=pow(2,n-1);
//	if(x==k) return 'A'+n-1;
//	else if(x>k) return kq(n-1,k);
//	else return kq(n,k-x);
//}
//main(){
//	long long n,t,k;
//	cin>>t;
//	while(t--){
//		cin>>n>>k;
//		cout<<kq(n,k);
//		cout<<endl;
//	}
//}
//
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define test() int t;cin>>t;while(t--)
ll n,k;
ll length[100];
char solve(ll n,ll k){
	if(k==length[n]) return 'A'-1+n;
	else if(k>length[n]) return solve(n-1,k-length[n]);
	else return solve(n-1,k);
}
main(){
	length[1]=1;
	for(int i=2;i<=93;i++)
		length[i]=length[i-1]*2;
	test(){
		cin>>n>>k;
		cout<<solve(n,k)<<endl;
	}
}
