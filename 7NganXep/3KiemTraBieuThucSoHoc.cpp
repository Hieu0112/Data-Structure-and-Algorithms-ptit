#include<bits/stdc++.h>
using namespace std;
#define test() int t;cin>>t;cin.ignore();while(t--)
#define faster() ios_base::sync_with_stdio(false);\
				cin.tie(NULL);\
				cout.tie(NULL);
#define memset(b,x,size) memset(b,x,sizeof(b))
#define mod 1000000007
#define PQ priority_queue<long long, vector<long long>, greater<int>>
#define ll long long
void solve(string s){
	stack<char>st;
	string ok="Yes";
	for(int i=0;i<s.size();i++){
		if(s[i]==')'){
		ok="Yes";
		st.pop();
		while(!st.empty()&&st.top()!='('){
			if(st.top()=='+'||st.top()=='-'||st.top()=='*'||st.top()=='/')	ok="No";
			st.pop();
		}
		if(ok=="Yes")	break;
		}
		else st.push(s[i]);
	}
	cout<<ok;
}
main(){
	string s;
	test(){
		getline(cin,s);
		solve(s);
		cout<<endl;
	}
}