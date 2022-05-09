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
ll dem[300];
main(){
	test(){
		int k;
		cin>>k;
		string s;
		cin>>s;
		memset(dem,0,size);
		for(auto x:s){
			dem[x]++;
		}
		priority_queue<ll>qe;//queue giamdan
		for(int i=1;i<300;i++)
			if(dem[i]) qe.push(dem[i]);
		while(k--){
			int x=qe.top();
			qe.pop();
			if(x-1>0)	qe.push(x-1);
		}
		ll counts=0;
		while(!qe.empty()){
			counts+=qe.top()*qe.top();
			qe.pop();
		}
	cout<<counts<<endl;
	}
}