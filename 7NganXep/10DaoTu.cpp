#include<bits/stdc++.h>
using namespace std;
main(){
	stack<string>st;
	int t;
	string str,a;
	cin>>t;
	cin.ignore();
	while(t--){
	getline(cin,str);
	stringstream ss(str);
	while(ss>>a)
		st.push(a);
	while(!st.empty()){
		cout<<st.top()<<" ";
		st.pop();
	}
	cout<<endl;
	}
}