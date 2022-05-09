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
void solve(string s){
	string result="";
	stack<string>st;
	for(auto x:s){
		if(x=='['){
			if(st.empty()||!isdigit(st.top()[0]))	st.push("1");
			st.push("[");
		}
		else if(isdigit(x)){
			if(st.empty()||!isdigit(st.top()[0]))	st.push(result+x);//co >=2 chu so
			else st.top()+=x;
		}
		else if(isalpha(x)){
			if(st.empty()||!isalpha(st.top()[0]))	st.push(result+x);//co >=2 chu cai
			else st.top()+=x;
		}
		else{
			string chu=st.top();
			st.pop();st.pop();
			string so=st.top();
			st.pop();
			int k;
			stringstream chuyenso(so);
			chuyenso>>k;
			string kq_ngoac="";
			while(k--)	kq_ngoac+=chu;
			if(st.empty()||!isalpha(st.top()[0]))	st.push(kq_ngoac);
			else	st.top()+=kq_ngoac;
		}
	}
	while(!st.empty()){
		result=st.top()+result;
		st.pop();
	}
	cout<<result<<endl;
}
main(){
	test(){
		string s;
		cin>>s;
		solve(s);
	}
}