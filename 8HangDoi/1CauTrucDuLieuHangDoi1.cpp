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
		queue<int>qe;
		while(n--){
			int x;
			cin>>x;
			switch(x){
			case 1:
				cout<<qe.size()<<endl;
				break;
			case 2:
				if(qe.empty())	cout<<"YES";
				else cout<<"NO";
				cout<<endl;
				break;
			case 3:
				int k;
				cin>>k;
				qe.push(k);
				break;
			case 4:
				if(!qe.empty())
				qe.pop();
				break;
			case 5:
				if(qe.empty())	cout<<"-1";
				else cout<<qe.front();
				cout<<endl;
				break;
			case 6:
				if(qe.empty())	cout<<"-1";
				else cout<<qe.back();
				cout<<endl;
					}
				}		
			}	
}