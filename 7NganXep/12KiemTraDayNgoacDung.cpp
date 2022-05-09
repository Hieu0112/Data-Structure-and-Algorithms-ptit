#include<bits/stdc++.h>
using namespace std;
#define test() int t;cin>>t;while(t--)
main(){
	string s;
	test(){
		stack<char>str;
		cin>>s;
		str.push(s[0]);
		for(int i=1;i<s.size();i++){
			bool check=true;
			if(!str.empty()){
			if(str.top()=='('&&s[i]==')') {
				check=false;
				str.pop();
			}
			else if(str.top()=='['&&s[i]==']') {
				check=false;
				str.pop();
			}
			else if(str.top()=='{'&&s[i]=='}') {
				check=false;
				str.pop();
			}
		}
			if(check) str.push(s[i]);
		}
		if(str.empty()) cout<<"YES";
		else cout<<"NO";
		cout<<endl;
	}
}