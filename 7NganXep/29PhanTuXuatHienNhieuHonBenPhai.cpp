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
int dem[1000005];
main(){
	test(){
		int n;
		cin>>n;
		int a[n],arr[n];
		stack<int>st;
		memset(dem,0,size);
		for(int i=0;i<n;i++) {
			cin>>a[i];
			dem[a[i]]++;
		}
		for(int i=n-1;i>=0;i--){
			while(!st.empty()&&dem[a[i]]>=dem[st.top()])	st.pop();
			if(st.empty())	arr[i]=-1;
			else arr[i]=st.top();
			st.push(a[i]);
		}
		for(auto x:arr) cout<<x<<" ";
		cout<<endl;
	}
}