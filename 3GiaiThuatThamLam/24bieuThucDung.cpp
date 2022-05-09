#include<bits/stdc++.h>
using namespace std;
#define test() int t;cin>>t;while(t--)
//
//[		]			]		[			]		[
//op=1	cl=1
//		cl=op=0		cl=1	s=1,op=1	
//							cl=0		cl=1	s=2;
//										op=0
void solve(string s){
	int open=0,close=0,res=0;
	for(auto i : s){
		if(i=='['){
			if(open<close){
				res+=(close-open);
				close--;
			}
			else open++;
		}
		else close++;
	}
	cout<<res;
}
main(){
	test(){
		string s;
		cin>>s;
		solve(s);
		cout<<endl;
	}
}