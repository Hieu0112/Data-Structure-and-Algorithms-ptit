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
	string s;
	int k,t;
	stack<int>st;
	cin>>t;
	while(t--){
		cin>>s;
		if(s=="PUSH"){
			cin>>k;
			st.push(k);
		}
		else if(s=="POP"){
			if(!st.empty()){
				st.pop();
			}
		}
		else{
			if(!st.empty())	cout<<st.top()<<endl;
			else cout<<"NONE";
			cout<<endl;
		}
	}
}