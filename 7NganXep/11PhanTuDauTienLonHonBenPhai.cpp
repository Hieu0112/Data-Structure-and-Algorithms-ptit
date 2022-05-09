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
		int n;
		cin>>n;
		int a[n],arr[n];
		stack<int>st;
		for(auto &x:a)	cin>>x;
		for(int i=n-1;i>=0;i--){
			while(!st.empty()&&a[i]>=st.top())	st.pop();
			if(st.empty())
				arr[i]=-1;
			else arr[i]=st.top();
			st.push(a[i]);
		}
		for(auto x:arr) cout<<x<<" ";
		cout<<endl;
	}
}