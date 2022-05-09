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
		int n;
		cin>>n;
		queue<string>qe;
		stack<string>st;
		qe.push("6");
		qe.push("8");
		st.push("6");
		st.push("8");
		while(true){
			string s=qe.front();
			qe.pop();
			if(s.size()==n)	break;
			qe.push(s+"6");
			qe.push(s+"8");
			st.push(s+"6");
			st.push(s+"8");
		}
		while(!st.empty()){
			cout<<st.top()<<" ";
			st.pop();
		}
		cout<<endl;
	}
}