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
int solve(string s){
	if(s=="PUSHFRONT") return 1;
	if(s=="PRINTFRONT") return 2;
	if(s=="POPFRONT") return 3;
	if(s=="PUSHBACK") return 4;
	if(s=="PRINTBACK") return 5;
	if(s=="POPBACK") return 6;
	return 0;
}
main(){
	int n,k;
	cin>>n;
	deque<int>qe;
	while(n--){
		string x;
		cin>>x;
		switch(solve(x)){
		case 1:
			cin>>k;
			qe.push_front(k);
			break;
		case 2:
			if(qe.empty())	cout<<"NONE";
			else cout<<qe.front();
			cout<<endl;
			break;
		case 3:
			if(!qe.empty())
			qe.pop_front();
			break;
		case 4:
			cin>>k;
			qe.push_back(k);
			break;
		case 5:
			if(qe.empty())	cout<<"NONE";
			else cout<<qe.back();
			cout<<endl;
			break;
		case 6:
			if(!qe.empty())
			qe.pop_back();
			break;
				}
			}		
}	
