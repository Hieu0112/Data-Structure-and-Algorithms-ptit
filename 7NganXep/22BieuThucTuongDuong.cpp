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
		for(int i=0;i<s.size();i++){
			if(s[i]=='('&&i-1>=0&&s[i-1]=='-')	st.push(i-1);
			else if(s[i]==')'&&!st.empty()){
				for(int j=st.top()+2;j<i;j++)
					{
						if(s[j]=='-') s[j]='+';
						else if(s[j]=='+')	s[j]='-';
					}
				st.pop();
			}
	}
	if(s[0] != '+' && s[0]!='(') cout << s[0];
	for(int i = 1; i < s.size(); i++)
		if(s[i] != ')' && s[i] != '(')	cout << s[i];
	cout << endl;
	}
}