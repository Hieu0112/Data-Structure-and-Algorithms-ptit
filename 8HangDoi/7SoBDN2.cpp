#include<bits/stdc++.h>
using namespace std;
#define test() int t;cin>>t;while(t--)
#define faster() ios_base::sync_with_stdio(false);\
				cin.tie(NULL);\
				cout.tie(NULL);
#define memset(b,x,size) memset(b,x,sizeof(b))
#define mod 1000000007
#define PQ priority_queue<long long, vector<long long>, greater<int>>
#define ll long long
main(){
	test(){
		long long n;
		cin>>n;
		queue<ll>qe;
		qe.push(1);
		while(true){
			ll s=qe.front();
			qe.pop();
			if(s%n==0){
				cout<<s;
				break;
			}
			qe.push(s*10);
			qe.push(s*10+1);
		}
		cout<<endl;
	}
}
