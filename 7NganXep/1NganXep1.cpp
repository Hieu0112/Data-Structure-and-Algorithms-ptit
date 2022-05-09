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
	string s;
	int k;
	stack<int>st;
	vector<int>arr;
	while(cin>>s){
		if(s=="push"){
			cin>>k;
			st.push(k);
		}
		else if(s=="pop"){
			if(!st.empty()){
				st.pop();
			}
		}
		else{
			arr.clear();
			if(!st.empty()){
			while(!st.empty()){
				arr.push_back(st.top());
				st.pop();
			}
				for(int i=arr.size()-1;i>=0;i--){
					cout<<arr[i]<<" ";
					st.push(arr[i]);
				}
			}
			else cout<<"empty";
			cout<<endl;
		}
	}
}