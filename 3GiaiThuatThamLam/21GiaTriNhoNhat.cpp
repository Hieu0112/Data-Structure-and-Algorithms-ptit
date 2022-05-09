#include<bits/stdc++.h>
using namespace std;
#define test() int t;cin>>t;while(t--)
#define pq priority_queue<int>
int chr[300];
void solve(pq Q){
	int sums=0;
	while(!Q.empty()){
		sums+=Q.top()*Q.top();
		Q.pop();
	}
	cout<<sums;
}
main(){
	test(){
		int k;
		string s;
		cin>>k>>s;
		memset(chr,0,sizeof(chr));
		for(int i=0;i<s.size();i++)		chr[s[i]]++;
		pq Q;
		for(int i=0;i<300;i++)	
			if(chr[i]!=0)	Q.push(chr[i]);
		for(int i=0;i<k;i++){
			int x=Q.top()-1;//remove ky tu xuat hien max
			Q.pop();
			Q.push(x);
		}
		solve(Q);
		cout<<endl;
	}
}