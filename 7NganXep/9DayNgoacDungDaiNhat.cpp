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
		string s;
		cin>>s;
		stack<int>st;
		st.push(-1);
		int dems=0;
		for(int i=0;i<s.size();i++){
			if(s[i]=='(')	st.push(i);
			else {
				st.pop();
				if(!st.empty()) dems=max(dems,i-st.top());
				else st.push(i);
			}
		}
		cout<<dems<<endl;
	}
}