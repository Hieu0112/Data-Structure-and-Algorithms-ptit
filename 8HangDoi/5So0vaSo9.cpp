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
		queue<string>qe;
		qe.push("9");
		while(true){
			string s=qe.front();
			qe.pop();
			stringstream ss(s);
			int x;
			ss>>x;
			if(x%n==0){
				cout<<s;
				break;
			}
			qe.push(s+'0');
			qe.push(s+'9');
		}
		cout<<endl;
	}
}