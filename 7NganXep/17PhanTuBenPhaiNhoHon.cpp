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
		int a[n],arr[n],result[n];
		stack<int>st1,st2;
		for(auto &x:a)	cin>>x;
		for(int i=n-1;i>=0;i--){
			while(!st1.empty()&&a[i]<=st1.top())	st1.pop();
			if(st1.empty())	arr[i]=-1;
			else arr[i]=st1.top();
			st1.push(a[i]);
		}
		for(int i=n-1;i>=0;i--){
			while(!st2.empty()&&a[i]>=a[st2.top()]) st2.pop();
			if(st2.empty())	result[i]=-1;
			else result[i]=arr[st2.top()];
			st2.push(i);
		}
		for(auto x:result)	cout<<x<<" ";
		cout<<endl;
	}
}