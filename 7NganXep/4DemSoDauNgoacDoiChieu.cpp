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
		int dem=0;
		stack<char>st;
		for(auto x:s){
			if(x=='(')	st.push(x);
			else{
				if(st.empty())	{
					st.push('(');
					dem++;
				}
				else st.pop();
			}
		}
		cout<<dem+st.size()/2<<endl;
	}
}