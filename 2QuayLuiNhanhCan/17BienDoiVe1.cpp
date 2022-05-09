#include<bits/stdc++.h>
using namespace std;
int n;
pair<int,int>so;
void solve(queue<pair<int,int>> arr){
	while(true){
		so=arr.front();//lay phan tu dau queue
		arr.pop();//xoa phan tu dau queue
		if(so.first==1){
			cout<<so.second<<endl;
			break;
		}
		if(so.first%3==0) arr.push({so.first/3,so.second+1});
		if(so.first%2==0) arr.push({so.first/2,so.second+1});
		arr.push({so.first-1,so.second+1});
	}
}
main(){
	int t;
	cin>>t;
	while(t--){
		queue<pair<int,int>> arr;
		cin>>n;
		arr.push({n,0});
		solve(arr);
	}
}