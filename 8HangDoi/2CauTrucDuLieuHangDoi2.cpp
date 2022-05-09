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
	queue<int>qe;
	test(){
		string s;
		cin>>s;
		if(s=="PUSH"){
			int x;
			cin>>x;
			qe.push(x);
		}
		else if(s=="PRINTFRONT"){
			if(qe.empty())	cout<<"NONE";
			else cout<<qe.front();
			cout<<endl;
		}
		else{
			if(!qe.empty()) qe.pop();
		}
	}
}