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
//main(){
//	test(){
//		string s,ss;
//		stack<char>st;
//		cin>>s;
//		st.push('1');
//		for(int i=0;i<s.size();i++){
//			if(s[i]=='D')	st.push(i+2+'0');
//			else{
//				while(!st.empty()){
//					ss+=st.top();
//					st.pop();
//				}
//				st.push(i+'0'+2);
//			}
//		}
//		while(!st.empty()) {
//			ss+=st.top();
//			st.pop();
//		}
//		cout<<ss<<endl;
//	}
//}
main(){
	test(){
		string s,result;
		cin>>s;
		stack<int>st;
		for(int i=0;i<s.size();i++){
			st.push(i+1);
			if(s[i]=='I')
				while(!st.empty()){
					result+=to_string(st.top());
					st.pop();
				}
		}
		st.push(s.size()+1);
		while(!st.empty()){
			result+=to_string(st.top());
			st.pop();
		}
		cout<<result<<endl;
	}
}