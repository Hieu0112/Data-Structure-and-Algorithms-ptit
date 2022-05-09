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
int so(int a,int b,char x){
	if(x=='+') return a+b;
	else if(x=='-') return a-b;
	else if(x=='*')	return a*b;
	return a/b;
}
main(){
	test(){
		string s;
		cin>>s;
		stack<int>st;
		for(int i=s.size()-1;i>=0;i--){
			if(isdigit(s[i]))	{
				st.push(s[i]-'0');
			}
			else{
				int s1=st.top();st.pop();
				int s2=st.top();st.pop();
				st.push(so(s1,s2,s[i]));
			}
		}
		cout<<st.top()<<endl;
	}
}