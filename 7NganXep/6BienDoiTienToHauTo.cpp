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
		stack<string>st;
		for(int i=s.size()-1;i>=0;i--){
			if(isalpha(s[i]))	{
				string a="";
				a+=s[i];
				st.push(a);
			}
			else{
				string s1=st.top();st.pop();
				string s2=st.top();st.pop();
				st.push(s1+s2+s[i]);
			}
		}
		cout<<st.top()<<endl;
	}
}
