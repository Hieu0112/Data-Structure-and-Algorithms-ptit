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
int Uu_tien(char x){
	if(x=='+'||x=='-') return 1;
	else if(x=='*'||x=='/')	return 2;
	else if(x=='^')	return 3;
	return 0;
}
main(){
	string s;
	test(){
		cin>>s;
		string result;
		stack<char>st;
		for(auto x:s){
			if(x=='(')	st.push(x);
			else if(isalpha(x))	result+=x;
			else if(x==')'){
				while(!st.empty()&&st.top()!='('){
					result+=st.top();
					st.pop();
				}
				if(!st.empty())	st.pop();
			}
			else{
				while(!st.empty()&&Uu_tien(st.top())>=Uu_tien(x)){
					result+=st.top();
					st.pop();
				}
				st.push(x);
			}
		}
		while(!st.empty()){
			if(st.top()!='(')	result+=st.top();
			st.pop();
		}
		cout<<result<<endl;
	}
}