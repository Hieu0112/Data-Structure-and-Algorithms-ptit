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
		int n;cin>>n;
		ll a[n],left[n],right[n];
		for(auto &x:a)	cin>>x;
		stack<ll>st1,st2;
		for(int i=0;i<n;i++){
			while(!st1.empty()&&a[st1.top()]>=a[i]) st1.pop();
			if(st1.empty())	left[i]=i+1;
			else left[i]=i-st1.top();
			st1.push(i);
		}
		for(int i=n-1;i>=0;i--){
			while(!st2.empty()&&a[st2.top()]>=a[i]) st2.pop();
			if(st2.empty())	right[i]=n-i;
			else right[i]=st2.top()-i;
			st2.push(i);
		}
		ll maxs=0;
		for(int i=0;i<n;i++) 
			if(left[i]+right[i]-1>=a[i])
			maxs=max(maxs,a[i]);
		cout<<maxs<<endl;
	}
}